#include <iostream>

using namespace std;
bool prim(int n){
	if(n<2)
		return false;
	else if(n==2)
		return true;
	else if(n%2==0)
		return false;
	else
		for(int i=3; i*i<=n; i+=2)
			if(n%i==0)
				return false;


	return true;

}
int xPrim(int n){
	if(n==1)
		return 2;
	else
	{
		int i;
		n--;
		for(i=3; n>0; i++){
			if(prim(i))
				n--;
		}
		return i-1;
	}
		
}
int main(){
	int x,i;
	cin>>x;
	if(x == 1)
		cout<<2;
	else{

		x--;
		for(i=3; x>0; i+=2){
			int nrdiv = 0;
			for(int j=3; j*j<=x; j+=2){
				if(i%j == 0)
					nrdiv++;
			}
				if(!nrdiv)
				{
					x--;
					cout<<i<<" "<<x<<" ";
				}
			if(x == 0)
				break;
			
		}
		//cout<<i;
	}

	return 0;
}