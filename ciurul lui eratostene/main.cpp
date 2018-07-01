#include <iostream>

using namespace std;
int p[1000000];
int main()
{
    int i, j;
    int n=100000;

    p[0]=p[1]=1;
    cout<<"2"<<" ";
    for(int i=3;i<=n;i+=2){
        if(p[i]==0)
            cout<<i<<" ";
        for(j=3*i;j<=n;j=j+2*i)
            p[j]=1;



    }
    return 0;
}
