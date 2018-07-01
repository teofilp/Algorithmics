#include <iostream>


using namespace std;
void hanoi(int n, char a, char b, char c){
	
	if(n>=1){
		hanoi(n-1, a, c, b);
		cout<<a<<"------------>"<<b<<endl;
		hanoi(n-1, c, b, a);
	}
		
}

int suma(int v[], int n, int i, int j){
	
	int *x = new int[n+1];
	int suma =0;
	
	for(int k=1; k<=n; k++){
		if(k<i || k>j)
			suma+= v[k];
	}
	return suma;

}
int main(){

	int n;
	cin>>n;
	int *v = new int[n];
	for(int i=1; i<=n; i++)
		cin>>v[i];
	sterge(v, n, 2 ,4);
	for(int i=1; i<=n; i++)
		cout<<v[i]<<" ";

	return 0;
}