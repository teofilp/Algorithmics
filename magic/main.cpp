#include <iostream>

using namespace std;
int S[100];
int nr;
int n;
int mat[100][100];
int linii[10000];
int coloane[10000];
bool valid(int k);
bool solutie(int k);
void afisare(int k);
bool magic(int v[], int n);
void BK(int k){
	for(int i=1; i<=n*n; i++){
		S[k] = i;
		if(valid(k)){
			if(solutie(k))
				afisare(k);
			else
				BK(k+1);
		}
			

	}
}
bool valid(int k){
	for(int i=0; i<k; i++)
		if(S[i] == S[k])
			return false;

	return true;
}
bool solutie(int k){
	if(k==n*n - 1){
		return magic(S, n);
	}
	return false;
}
void afisare(int k){
	nr = 0;

	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			mat[i][j] = S[nr++];

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}

	cout<<endl;
	
}
bool magic(int v[], int n){
	int pozi = 0;
	bool magic = true;
	int suma = (n*(n*n + 1))/2;
	
	for(int i=0; i<n; i++)
		linii[i] = coloane[i] = 0;

	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++){

			mat[i][j] = v[pozi++];
			linii[i]+=mat[i][j];
			coloane[j]+=mat[i][j];
		}
		for(int i=0; i<n; i++){
			
			if(linii[i]!=suma || coloane[i]!=suma)
					magic = false;
		}
		
	return magic;
		
}
int main(){
	

	cin>>n;
	BK(0);
	
	
	return 0;
}