#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    for(int i = pow(10, n-1); i<=m*pow(10,n-1 ); i++){
        int ci = i;
        bool ok = true;
        while(ci&&ok){

            if(ci%10 >=m)
                ok = false;
            ci/=10;
        }
        if(ok)
            cout<<i<<endl;
    }
    return 0;
}
