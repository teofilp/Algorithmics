#include <iostream>

using namespace std;
void num(int n, int v[]){
	int mini = v[0];
	for(int i=0; i<n; i++){
		if(v[i] <= mini)
			v[i] = 0;
	}
}
int main(){

	int n;
	cin>>n;
	int *v = new int[n];
	for(int i=0; i<n; i++)
		cin>>v[i];
	num(n, v);
	for(int i=0;i<n; i++)
		cout<<v[i]<<" ";

	return 0;
}