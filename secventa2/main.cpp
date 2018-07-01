#include <iostream>

using namespace std;

int main()
{
    int m,n,ok,c=0,p;
    cin>>m;
    int v[m];
    for(int i=0;i<m;i++)
        cin>>v[i];

    cin>>n;
    int w[n];
    for(int i=0;i<n;i++)
        cin>>w[i];

    for(int i=0;i<m;i++){
            ok=1;
        p=i;
        for(int j=0;j<n;j++)
        {
            if(v[i]!=w[j])
                ok=0;
                i++;
        }
        if(ok)
            c++;
            i=p;

    }
    cout<<c;
    return 0;
}
