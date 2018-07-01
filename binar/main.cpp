#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int m,p[100000000];
int prim(int n){
    if(n==1||n==0||n%2==0)
        return 0;
    for(int i=3;i*i<=n;i++)
        if(n%i==0)
        return 0;
    return 1;

}
int binar(int v[],int l,int r,int x){
    if (l>r)
        return -1;
    else{
        m=(l+r)/2;
        if(x==v[m])
            return m;
        if(x<v[m])
            return binar(v,l,m-1,x);
        else
            return binar(v,m+1,r,x);
    }

}
void ciur(int n){
    p[0]=p[1]=0;
    cout<<2<<" ";
    for(int i=3;i<n;i+=2)
    {
        if(p[i]==0)
            cout<<i<<" ";
        for(int j=3*i;j<n;j+=2*i)
            p[j]=1;
    }


}
int main()
{
 /*    int n,x;
    cin>>n;
    int *v=new int[n];
    for(int i=0;i<n;i++)
       v[i]=i+1;
       cin>>x;

    sort(v,v+n);
    if(v[binar(v,0,n-1,x)]==x)
    cout<<"Exista";
    else
        cout<<"Nu exista";
ciur(100000000);

*/  int k=0;
    for(int i=0;i<100000000;i++)
        if(prim(i))
        k++;
        cout<<k;
    return 0;
}
