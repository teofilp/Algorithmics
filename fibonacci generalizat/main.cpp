#include <iostream>
#include <cmath>

using namespace std;

int main(){
	long a,b,n;
	long s;
	cin>>a>>b>>n;
	cout<<a<<" ";
	s=b;
	while(abs(s)<=n){
		cout<<s<<" ";
		s = a+b;
		a=b;
		b=s;

	}

	return 0;
}