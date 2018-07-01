#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main()
{
    ifstream read("prime1.in");
    ofstream write("prime1.out");

    int n,c=0,ok=1;
    read>>n;
    int *v=new int[n];
    for(int i=0;i<n;i++)
        read>>v[i];
    int k;
    read>>k;
    for(int i=0;i<k;i++)
        for(int j=0;j<n&&ok==1;j++)
    if(i%v[j]==0){
        c++;
        ok=0;
    }
         cout<<c;

    return 0;
}
