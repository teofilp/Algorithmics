#include <iostream>

using namespace std;
int v[1000];
int maxim;

bool prim(int n){
    if(n<2)
        return false;
    else if(n==2)
        return true;
    else if(n%2==0)
        return false;
    else
        for(int i=3; i*i<=n; i+=2)
            if(n%i==0)
            return false;
    return true;
}
int MaximDivImp(int left, int right){
    int m, i, j;
    if(left!=right){
        m  = (left+right)/2;
        i = MaximDivImp(left, m);
        j = MaximDivImp(m+1, right);
    }
    else
        if(v[left] > maxim)
        maxim = v[left];

}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>v[i];
    MaximDivImp(0, n-1);
    cout<<maxim;
    return 0;
}
