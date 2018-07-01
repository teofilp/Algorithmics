#include <iostream>
#include <fstream>
using namespace std;
int a, b, c;
unsigned long long exp(int a, int n){
	unsigned long long p = 1;
	while(n){
		if(n%2)
		{
			p*=a;
			n--;
		}
		a*=a;
		n/=2;

	}
	return p;
}
int main(){
	ifstream read("puteri5.in");
	ofstream write("puteri5.out");
	read>>a>>b>>c;
	write<<exp(a, exp(b,c)) + exp(a, exp(c,b)) + exp(b, exp(a, c)) + exp(b, exp(c, a)) + exp(c, exp(a, b)) + exp(c, exp(b ,a));

}