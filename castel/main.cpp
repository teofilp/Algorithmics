#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
struct frecv{
	int val;
	int aparitii;
	bool cheie;
};
bool sortare(frecv a, frecv b){
	return a.aparitii<b.aparitii;
}
int main(){
	ifstream read("castel.in");
	ofstream write("castel.out");
	frecv* frec = new frecv[10];
	for(int i=0; i<10 ;i++){
		frec[i].val = i;
		frec[i].aparitii = 0;
		frec[i].cheie = false;
	}
	
	int n, k, x;
	read>>n;
	for(int i=0; i<n; i++)
	{
		read>>x;
		while(x){
			frec[x%10].aparitii++;
			x/=10;
		}

	}
	
	read>>k;
	cout<<"k = " <<k<<endl;

	
	for(int i=0; i<k; i++)
		{
			read>>x;
			
			frec[x].cheie = true;
			

		}
	
	for(int i=0; i<9; i++)
		for(int j=i+1; j<10 ;j++)
			if(frec[i].aparitii>frec[j].aparitii)
				swap(frec[i], frec[j]);
	// for(int i=9; i>=0; i--)
	// 	cout<<frec[i].val<<" "<<frec[i].aparitii<<" "<<frec[i].cheie<<endl;
	for(int i=9; i>=0; i--)
		if(frec[i].cheie == true){
			write<<frec[i].val<<" "<<frec[i].aparitii;
			break;
		}




	return 0;
}