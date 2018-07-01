#include <iostream>

using namespace std;
int catalan(int n){
	if(n==1 || n==0)
		return 1;
	int p =1;
	int d=1;
	for(int i=2; i<=n; i++)
	{
		p*=n+i;
		d*=i;
	}
	return p/d;
}
int main(){

	int n;
	cin>>n;
	cout<<catalan(n-2);


}