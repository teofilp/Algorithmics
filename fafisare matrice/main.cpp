#include <iostream>

using namespace std;

void afismat(int a[][100],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<a[i][j]<<" ";
            cout<<endl;
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][100];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        cin>>a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<a[i][j]<<" ";
            cout<<endl;
    }
    afismat(a, n, m);
    return 0;
}
