#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int v[n][n];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        v[i][j]=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++){
            if(i==a||j==b)
                v[i][j]=0;

            if(i==a&&j==b)
                v[i][j]=0;
            if(i<a&&j<b)
            v[i][j]=1;

            if(i>a&&j<b)
                v[i][j]=3;
            if(i<a&&j>b)
                v[i][j]=2;
            if(i>a&&j>b)
                v[i][j]=4;

            }
    }
    for(int i=1;i<=n;i++){
            cout<<endl;
        for(int j=1;j<=n;j++)
            cout<<v[i][j]<<" ";

    }
    return 0;
}
