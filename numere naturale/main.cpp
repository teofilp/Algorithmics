#include <iostream>
#include <fstream>
using namespace std;

int main()
{   ifstream read("NUMAR.in");
    ofstream write("NUMAR.out");
    int n,c=0;cmax=0,i1;
    read>>n;
    int v[n];
    for(int i=0;i<n;i++)
        read>>v[i];
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++)
            if(v[j]<v[j+1])
            c++;
        if(c>cmax)
            cmax=c;

    }
    return 0;
}
