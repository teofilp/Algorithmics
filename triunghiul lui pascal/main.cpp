#include <iostream>

using namespace std;
unsigned long long  a[1000];
unsigned long long b[1000];
int l=2;

void triunghi(int n, unsigned long long a[], unsigned long long b[]){

	if(n == 1)
		cout<<1;
	else
		if(n==2)
		b[0] = b[1] = 1;
	else
	{
		l++;
		b[0] = 1;
		b[l-1] = 1;
		for(int i=1; i<l-1 ; i++){
			b[i] = a[i-1]+a[i];
			
		}
		for(int i=0; i<l; i++)
			a[i] = b[i];
		
		
	}

		

}
unsigned long long catalan(unsigned int n){
	if(n<2)
		return 1;
	unsigned long long res = 0;
	for(int i=0; i<n ;i++)
		res+= catalan(i)*catalan(n-i-1);
	return res;
}
int main(){


	int n;
	cin>>n;
	for(int i=0; i<n; i++)
		cout<<catalan(i)<<" ";


	return 0;
}