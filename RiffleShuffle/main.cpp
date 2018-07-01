#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
struct carte{
	int pozitie;
	bool p1;
};

int main(){
	
	ifstream read("ord.in");
	ifstream read2("ord.in");
	ofstream write("ord.out");
	int n, c;
	read>>n;
	int ultimBefore, ultimAfter;

	carte *before = new carte[n+1];
	carte *after = new carte[n+1];
	int *deck1 = new int[n+1];
	int *deck2 = new int[n+1];
	int *pachet1 = new int[n+1];
	int *pachet2 = new int[n+1];
	for(int i=1; i<=n; i++)
		read>>deck1[i];
	for(int i=1; i<=n; i++)
		read>>deck2[i];
	read2>>n;
	for(int i=1; i<=n; i++){
		int x;
		read2>>x;
		before[x].pozitie = i;
		if(i==n){
			ultimBefore = x;
		}

	}
	for(int i=1; i<=n; i++)
	{
		int x;
		read2>>x;
		after[x].pozitie = i;
		if(i==n){
			ultimAfter = x;
		}


	}
	// cout<<ultimBefore<<" "<<ultimAfter<<" ";
	// cout<<before[ultimBefore].pozitie<<" "<<after[ultimBefore].pozitie<<" ";
	if(before[ultimBefore].pozitie > after[ultimBefore].pozitie)
		c = ultimAfter;
	else{
		for(int i=n; i>=0; i--){
			if(abs(before[deck2[i]].pozitie - before[deck2[i-1]].pozitie) > 1)
			{

				c = deck2[i-1];
				break;
			}
		}
	}
	// cout<<c<<" ";
	int endOfDeck1 = before[c].pozitie;
	cout<<"end of deck "<<endOfDeck1<<" ";
	// cout<<endOfDeck1<<" ";
	int pd1 = 1;
	int pd2 = 1;
	for(int i=0; i<n+1; i++){
		pachet1[i] = pachet2[i] = 99999999;
	}
	for(int i=1; i<=n; i++){
		if(before[deck2[i]].pozitie <= endOfDeck1)
		{
			pachet1[pd1++] = before[deck2[i]].pozitie;
		}
		else{
			pachet2[pd2++] = before[deck2[i]].pozitie;
		}
	}
	
	// for(int i=1; i<=n; i++)
	// cout<<pachet1[i]<<" " ;

	// cout<<endl;
	// for(int i=1; i<=n; i++)
	// 	cout<<pachet2[i]<<" ";
	bool corect = true;
	for(int i=1; i<n; i++)
		if((pachet1[i] > pachet1[i+1]) || (pachet2[i] > pachet2[i+1]))
		{
			corect = false;
			break;
		}
		cout<<corect;
	// for(int i=1; i<=n; i++)
	// 	cout<<pachet2[i]<<" ";
	// cout<<endl;
	// for(int i=1; i<=n; i++)
	// 	cout<<pachet1[i]<<" ";
	return 0;
}