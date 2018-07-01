#include <iostream>
#include <cmath>
using namespace std;
bool prime(int n)
{
    if(n<2)
        return false;
    else if(n == 2)
        return true;
    else if(n%2 == 0)
        return false;
    else
        for(int i = 3; i*i<=n; i+=2)
            if(n%i == 0)
            return false;
    return true;
}
int main()
{



    int n;
    cin>>n;
    for(int i=pow(10, n-1); i<pow(10, n); i++){
        int ci = i;
        bool ok = true;
        while(ci&&ok){
            if(!prime(ci%10))
                ok = false;
                ci/=10;
        }
            if(ok)
                cout<<i<<endl;
    }


    return 0;
}
