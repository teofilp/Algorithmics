#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
unsigned int cmmdc(unsigned long a, unsigned long b){
	int r;
	while(b){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
unsigned long cmmmc(unsigned long a, unsigned long b){
	return a*b/cmmdc(a,b);
}
vector<unsigned long int> celMaiMare;
vector<unsigned long int> rev;
int main(){
	ifstream read("planete.in");
	ofstream write("planete.out");
	short n;
	read>>n;
	for(int i=0;  i<n; i++)
	{
		unsigned long int x;
		read>>x;
		rev.push_back(x);

	}

	unsigned long int aux;
	aux = cmmmc(rev[0], rev[1]);
	celMaiMare.push_back(aux);
	for(int i=2; i<n; i++){
		aux = cmmmc(aux, rev[i]);
		celMaiMare.push_back(aux);

	}
	cout<<aux;
	int i=0;
	int j=0;
	

	return 0;
}