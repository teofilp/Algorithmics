#include <iostream>
#include <fstream>
using namespace std;
struct elem{
	int i, j, val;
};
int comparare(elem a, elem b){
	if(a.i>b.i)
		return 1;
	if(a.i==b.i&& a.j>b.j)
		return 1;
	if(a.i == b.i && a.j == b.j)
		return 2;
	return 0;
}
int main(){

	int n,m, n1, n2;
	cin>>n>>m>>n1>>n2;
	elem *v1 = new elem[n1];
	elem *v2 = new elem[n2];
	for(int i=0; i<n1; i++)
		cin>>v1[i].i>>v1[i].j>>v1[i].val;
	for(int i=0; i<n2; i++)
		cin>>v2[i].i>>v2[i].j>>v2[i].val;
	elem *s = new elem[n1+n2];
	int nrel=0;
	int i,j;
	i=j=0;
		cout<<'\n'<<'\n'<<'\n';
	for(int i =0; i<n1; i++)
		cout<<v1[i].i<<" "<<v1[i].j<<" "<<v1[i].val<<endl;
	cout<<'\n'<<'\n'<<'\n';
	for(int i =0; i<n2; i++)
		cout<<v2[i].i<<" "<<v2[i].j<<" "<<v2[i].val<<endl;

	while(i<n1||j<n2){
		if(comparare(v1[i], v2[j]) ==1){
			s[nrel++] = v1[i];
			i++;
		}
		else if(comparare(v1[i], v2[j]) ==2 )
		{
			s[nrel++] = v2[j];
			j++;
		}
		else{
			s[nrel++].val = v2[j].val + v1[i].val;
			i++; j++;
		}

	}
	cout<<endl;
	for(int i=0; i<nrel; i++)
		cout<<s[i].i<<" "<<s[i].j<<" "<<s[i].val<<endl;


	return 0;
}