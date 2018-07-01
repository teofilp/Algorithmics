#include <iostream>

using namespace std;
int s[10001];
int main(){

	int n,suma=0;
	cin>>n;

	int *v = new int[n];
	for(int i=0; i<n; i++){

		cin>>v[i];
		suma+=v[i];
		
	}

	
	s[0] = 1;
	for(int j=0; j<n; j++)
	for(int i=10000; i>=0; i--)
		if(s[i])
			s[i+v[j]]=1;
	//for(int i=0; i<suma; i++)
	//	cout<<s[i]<<" ";
	if(suma%2==0&&s[suma/2])
		cout<<suma;
	else{
		int st;
		st = suma/2;
		while(!s[st]){
			st--;
		}
		cout<<st<<" "<<suma-st;


		}
	
	return 0;
}