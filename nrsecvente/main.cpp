#include <iostream>

using namespace std;

int main()
{
    int n,t,k,c=0,ok;
    cin>>n>>t>>k;
    int v[n];
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n-k+1;i++){
        ok=1;
        for(int j=i;j<i+k;j++)
            if(v[j]>t)
            ok=0;
        if(ok)
            c++;
    }
    cout<<c;
    return 0;
}
