#include <iostream>

using namespace std;
int prim(int n){

    if(n<2)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(int i=3;i*i<=n;i++)
        if(n%i==0)
            return 0;

            return 1;


}
int main()
{
    for(int i=0;i<100;i++)
        if(prim(i))
        cout<<i<<" ";
    return 0;
}
