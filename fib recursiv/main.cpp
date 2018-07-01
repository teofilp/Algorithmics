#include <iostream>
#include <algorithm>
using namespace std;
int fib(int n){
if(n<=1)
    return 1;
    return fib(n-1)+fib(n-2);

}
int cautareBinara(int v[], int l, int r,int x){
    if(l==r&&x==v[l])
        return l;
        if(l==r&&x!=v[l])
            return -10;
    int m=(l+r)/2;
    if(x<=v[m])
    return cautareBinara(v,l,m,x);
    else
        return cautareBinara(v,m+1,r,x);


}


int main()
{
    int l,r,x,n,m;

    cin>>n>>x;
    int *v=new int[n];
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v,v+n);
    l=0;
    r=n-1;
    l=cautareBinara(v,l,r,x);
   cout<<cautareBinara(v,l,r,x)<<" "<<v[l];
   cout<<endl;
   for(int i=0;i<n;i++)
    cout<<v[i]<<" ";

    return 0;
}
