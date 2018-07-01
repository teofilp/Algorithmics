#include <iostream>
#include <fstream>
#include <bitset>
#include <cmath>
using namespace std;
bool perfect(unsigned long x){
	unsigned long s = sqrt(x);
	return (s*s == x);
}
bool isFibonacci(unsigned long n){
	return (perfect(5*n*n - 4) || perfect(5*n*n + 4));
}

int main(){
	ifstream read("fibocel.in");
	ofstream write("fibocel.out");
	unsigned long n;
	unsigned long st, dr;
	read>>n;
	for(int i=0; i<n; i++)
	{	
		read>>st>>dr;
		int count =0;
		for(int j=st; j<=dr; j++)
		{
			bitset<32> foo(j);
			if(isFibonacci(foo.count()) ){


				count++;
				
				}
		}
		write<<count<<endl;
	}

	

	return 0;
}