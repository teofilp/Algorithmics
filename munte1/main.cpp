#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;
int n;
struct elem{
	unsigned long valoare;
	int i;
	int j;
};
bool sortare(elem a, elem b){
	return a.valoare<b.valoare;
}
int cautBinar(elem v[], int left, int right, int x){
	int m = (left+right)/2;
	if(left>right)
		return 1;
	if(x == v[m].valoare)
		return m;
	if(x > v[m].valoare)
		cautBinar(v, m+1, n*n-1, x);
	else
		cautBinar(v, 0, m-1, x);
}
int main(){
	ifstream read("munte1.in");
	ofstream write("munte1.out");
	
	int poz=0;
	int x;
	read>>n;
	elem* v = new elem[n*n];
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++){
			read>>v[poz].valoare;
			v[poz].i = i;
			v[poz].j = j;
			poz++;
		}
		read>>x;
	sort(v, v+(n*n), sortare);
	

	int pozitieGasita = cautBinar(v, 0, n*n-1, x);
	write<<v[pozitieGasita].i + 1<<" "<<v[pozitieGasita].j + 1;

	return 0;
}