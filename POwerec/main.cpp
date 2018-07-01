#include <iostream>

using namespace std;
int pow(int n, int p){
    if(!p)
    return 1;
    else return pow(n, p-1)*n;



}
int main()
{
    int n,p,i,pr;
    cin>>n>>p;
    pr=1;
    i=1;
    cout<<pow(n,p);
    return 0;
}
