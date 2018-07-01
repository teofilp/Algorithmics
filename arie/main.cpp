#include <iostream>

using namespace std;
struct punct{
	double x, y;
};
int main(){
	int n;
	cin>>n;
	punct *v = new punct[n+1];
	for(int i=0; i<n; i++){

		cin>>v[i].x>>v[i].y;
		v[i].x +=1001;
		v[i].y +=1001;
	}
	double arie = 0;
	v[n].x = v[0].x;
	v[n].y = v[0].y; 
	for(int i=0; i<n; i++)
		arie = arie + ((v[i+1].x - v[i].x)*(v[i].y+v[i+1].y));
			if(arie<0)
			arie = -arie; 
		cout<<arie/2;
	return 0;
}