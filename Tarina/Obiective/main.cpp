#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
struct cursa{
	int departure;
	int arrival;

};
bool smaller(cursa a, cursa b){
	return a.arrival<b.arrival;
}

int main(){
	ifstream read("obiective.in");
	ofstream write("obiective.out");
	int n, m;
	read>>n>>m;
	cursa* v = new cursa[m];
	for(int i=0; i<m; i++)
		read>>v[i].departure>>v[i].arrival;

	sort(v, v+m, smaller);
	for(int i=0; i<m; i++)
		cout<<v[i].departure<<" "<<v[i].arrival<<endl;


	return 0;
}