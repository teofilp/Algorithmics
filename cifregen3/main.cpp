#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    for(int i=pow(10, n-1); i<m*pow(10, n-1); i++){
        int ci = i;
        bool ok = true;
        int pr = ci%10;
        ci/=10;
        int ul;
        while(ci&&ok){
            ul = ci%10;
            ci/=10;
            if(ul>=m)
                ok = false;
        }
        if(pr == ul && ul<m)
            cout<<i<<endl;

    }
    return 0;
}
