#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int m, n;
    cin>>n>>m;
    for(int i=pow(10, n-1); i<m*pow(10, n-1); i++)
    {
        int ci = i;
        bool ok  = true;
        int ul  = ci%10;
        ci/= 10;
        if(ul>=m)
            ok = false;
        while(ci&&ok){
            if(abs(ul - ci%10)<2)
                ok = false;
            ul = ci%10;
            ci/=10;
            if(ul >= m)
                ok = false;
        }
        if(ok)
            cout<<i<<endl;
    }
    return 0;
}
