#include <iostream>
#include <fstream>

using namespace std;

int sCifre(int n){

	int s = 0;
	while(n%10 == 0)
	{
		n/=10;
	}
	while(n){
		s+=n%10;
		n/=10;
	}
	return s;
}
int main(){
	ifstream read("piata.in");
	ofstream write("piata.out");

	int n, c1, c2, l1, l2, s=0;
	read>>n;
	int* v = new int[2*n+1];
	for(int i=1; i<=n; i++){
		v[i] = sCifre(i);

	}
	for(int i=n+1, j=1; i<=2*n; i++, j++)
		v[i] = sCifre(j);
	read>>l1>>c1>>l2>>c2;

	for(int i=n-l2+1; i<=n-l2+1+(l2-l1); i++){
		for(int j=i+c1; j<=i+c1+(c2-c1); j++)
			s+=v[j];
		
	}
	// for(int i=1; i<=2*n; i++)
	// 	cout<<v[i]<<" ";
	write<<s;


	return 0;
}