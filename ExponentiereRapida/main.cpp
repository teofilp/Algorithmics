#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
double expo(int x, int n){
	double p =1;
	while(n){
		if(n%2==1)
		{
			p*=x;
			n--;
		}
		x*=x;
		n/=2;
	}
	return p;
}
double expoFor(int x, int n){
	double p=1;
	for(int i=0; i<n; i++)
		p*=x;
	return p;
}
struct punct{
	int x;
	int y;
};
int main(){
	
	int n, minX, maxX, minY = 1000, maxY = -1000;
	cin>>n;
	minX = minY;
	maxX = maxY;
		for(int i=0; i<n; i++){
			punct p;
			cin>>p.x>>p.y;

			if(p.x > maxX)
				maxX = p.x;
			if(p.y > maxY)
				maxY = p.y;
			if(p.x < minX)
				minX = p.x;
			if(p.y < minY)
				minY = p.y;

		}
		cout<<(maxX - minX)*(maxY - minY);
	return 0;
}