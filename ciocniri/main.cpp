#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int x0, y0, xf, yf, w,h;
	char c;
	cin>>x0>>y0>>xf>>yf>>w>>h>>c;
	while(c!='e'){
		if(c == 'f'){
			y0 = 2*h - y0;

		}
		else if(c == 'b'){
			y0 = -y0;

		}
		else if(c == 'l'){
			x0 = -x0;

		}
		else{
			x0 = 2*w - x0;
		}
		cin>>c;
	}
		double s = sqrt(pow(xf-x0, 2)+pow(yf-y0, 2));
		cout<<s;

	return 0;
}