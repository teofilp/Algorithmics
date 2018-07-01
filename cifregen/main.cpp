#include <iostream>
#include <math.h>
using namespace std;
int fr[10];
int main()
{
    int a, b, n;
    bool ok = true;
    cin>>a>>b>>n;
    for(int i=a; i<=b; i++)
        fr[i] = 1;
    for(int i=a*pow(10,n-1); i<=(b+1)*pow(10,n-1); i++ ){
        ok = true;
        int ci = i;
        while(ci&&ci){
            if(!fr[ci%10])
                ok = false;
            ci/=10;
        }
        if(ok)
            cout<<i<<endl;
    }
    return 0;
}
