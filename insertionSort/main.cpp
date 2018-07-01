#include <iostream>

using namespace std;
bool isPrime(int n){
	if(n<2)
		return false;
	else
		if(n==2)
			return true;
	else if(n%2==0)
		return false;
	else for(int i=3; i*i<=n; i+=2)
			if(n%i==0)
				return false;

	return true;
}
int main(){

	int v[5] = {5, 3, 6, 4, 2};
	for(int j=1; j<5; j++){
		int key = v[j];
		int i=j-1;
		while(i>=0 && key > v[i]){
			v[i+1] = v[i];
			i--;
		}
		v[i+1] = key;
	}
	for(int i=0; i<5; i++)
		cout<<v[i]<<" ";

	int n;
	cin>>n;
	cout<<isPrime(n);
	return 0;
}