#include <iostream>
#include <cmath>
using namespace std;

int main(){

	int n;
	cin>>n;
	int *v = new int[n];
	for(int i=0; i<n; i++)
		cin>>v[i];
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(v[i]>v[j])
				swap(v[i],v[j]);
	cout<<v[n/2]<<" ";
	int s=0;
	for(int i=0; i<n; i++)
		s+=abs(v[n-2]- v[i]);
	cout<<s;

	return 0;
}