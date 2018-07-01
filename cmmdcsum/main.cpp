#include <iostream>

using namespace std;
int cmmdc(int a,int b){
int r;
while(b!=0){
    r=a%b;
    a=b;
    b=r;
}
return a;
}
int main()
{
    int n,a=0,b=0;
    cin>>n;
    int v[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        cin>>v[i][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
    {
        if(j<i)
            a+=v[i][j];
        if(j>i)
            b+=v[i][j];

    }
    cout<<cmmdc(a,b);



    return 0;
}
