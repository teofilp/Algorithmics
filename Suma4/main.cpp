#include <iostream>

using namespace std;
const int MOD10 = 3;
int main(){
	int n;
	cin>>n;
	int s=0;
	s+=MOD10*(n/10);
	s%=10;
	n-=((n/10)*10);
	for(int i=1; i<=n; i++){
		s+=i*i*i*i;
		s%=10;
	}
	cout<<s;

}