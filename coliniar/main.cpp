#include <iostream>
#include <fstream>

using namespace std;

struct elem{
	int x,y;
};
int coliniare(elem a, elem b, elem c){
	 int p1 = (c.y-a.y)*(b.y - a.y);
	 int p2 = (b.x - a.x)*(c.x - a.x);

	 return p1 == p2;



}
int maxi = 0;
int main(){

	int n;
	cin>>n;
	elem *v = new elem[n];
	for(int i=0; i<n; i++)
		cin>>v[i].x>>v[i].y;

	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			 int contor = 2;
			for(int k=j+1; k<n; k++)
				if(coliniare(v[i], v[j], v[k]))
					contor++;
				if(contor > maxi)
					maxi = contor;
		}
	}
	cout<<maxi;



	return 0;
}