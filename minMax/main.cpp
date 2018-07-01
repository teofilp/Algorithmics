#include <iostream>

using namespace std;

int main(){

	int mini = 101;
	int maxi = -101;
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		if(x<mini)
			mini = x;
		if(x>maxi)
			maxi = x;
	}
	cout<<mini<<" "<<maxi;

	return 0;
}