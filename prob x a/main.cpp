#include <iostream>

using namespace std;

int main()
{
   int m,n;
   cin>>n>>m;
   int v[n][m];
   for(int j=0;j<m;j++)
    v[0][j]=n;
   for(int i=0;i<n;i++)
    v[i][m-1]=n-i;

   for(int j=m-2;j>=0;j--)
    for(int i=1;i<n;i++)
    v[i][j]=v[i-1][j]+v[i][j+1];



   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    cout<<v[i][j]<<" ";
    cout<<endl;
   }


    return 0;
}
