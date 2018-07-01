#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int patrat(int n){
double d=sqrt(n);
if(int(d)==d)
    return 1;
else
    return 0;


}
int prim(int n){
    if(n<2)
        return 0;
    else
        for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
            return 0;

    }
    return 1;
}
int sumaprim(int n){
    int nr1=0,nr2=0;
    for(int i=2;i<n;i++)
    {
        if(prim(i)&&i!=nr1){
             nr2=nr1;
             nr1=i;
        }
        if(nr1+nr2==n)
            return 1;




    }
    return 0;
}

int main()
{   ifstream read("cifru.in");
    ofstream write("cifru.out");
    int n,ok=0;
    read>>n;
    int v[n];
    for(int i=0;i<n;i++)
        read>>v[i];

    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(v[i]>v[j])

                swap(v[i],v[j]);
    write<<v[n-1]<<" "<<v[n-2]<<endl;

    for(int i=n-1;i>=0&&ok==0;i--)

        {
            if(sumaprim(v[i])){

                   ok=1;
           write<<v[i];
            }

        }



    return 0;
}
