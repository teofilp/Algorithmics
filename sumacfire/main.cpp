#include <iostream>

using namespace std;
void sumcif(int n, int &s, int &t){

    while(n){
        if(n%10%2==1)
            s+=n%10;
        else
            t+=n%10;
            n/=10;
    }

}
int main()
{   int t=0; int s=0;
    cout<<sumcif(274,s,t );
    cout<<t;
    return 0;
}
