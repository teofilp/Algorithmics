#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int p[100001];
int prim(int n){

    if(n<2)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(int i=3;i*i<=n;i++)
        if(n%i==0)
            return 0;

            return 1;


}
int main()
{   ifstream read("prim.in");
    ofstream write("prim.out");
 int i, j;
    int n=100000;

    p[0]=p[1]=1;

    for(int i=3;i<=n;i+=2){

if(p[i]==0)
    cout<<i<<" ";


        for(j=3*i;j<=n;j=j+2*i)
            p[j]=1;


    }
    int k,ok=0,c=1;
     cin>>k;





    if(k==1)
    {
        cout<<9;
        ok=1;
    }
    else
    {   for(i=0;ok==0;i++){

            if(p[i]==0){
                c++;

            }

            if(c==k+1){
                 cout<<i*i;
            ok=1;
            }


            }

    }


    return 0;
}
