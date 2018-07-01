#include <iostream>
#define uint64 long long int
using namespace std;
uint64 factorial(int x);

int main()
{
    int n;
    cin>>n;
    if(n==0)
        cout<<0;
    else{
        if(n%2==0)
        cout<<factorial(n/2)*factorial(n/2);
    else
        cout<<factorial(n/2)*factorial(n/2+1);
    }

    return 0;
}
uint64 factorial(int x){
    uint64 p = 1;
    for(int i=2; i<=x; i++)
        p*=i;
    return p;
}
