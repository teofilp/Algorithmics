#include <iostream>

using namespace std;
int v[25000];
int n,m;
int Binar( int left, int right, int x){

    if(left>right)
        return -1;
    int m=(left+right)/2;
    if(x==v[m])
        return m;
    if(x<v[m])
        return Binar(left,m-1,x);
    else
        return Binar(m+1,right,x);







}
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>v[i];
    cin>>m;
    for(int i=0; i<m; i++){
        int c;
        cin>>c;
        if(Binar(0, n-1, c)>-1)
            cout<<1<<" ";
        else
            cout<<0<<" ";
    }

    return 0;
}
