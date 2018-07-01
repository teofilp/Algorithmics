#include <iostream>

using namespace std;

int main()
{
    int v[1000];
    int n;

    cin>>n;
    v[0]=1;
    v[1]=1;
    for(int i=2;i<1000;i++)
        v[i]=v[i-1]+v[i-2];
    cout<<v[n-1];
          return 0;
}
