#include <iostream>
#include <fstream>
using namespace std;

int main()
{   ifstream read("numere5.in");
    ofstream write("numere5.out");

    long long int  n,nr1=0,nr2=0;;
    read>>n;
    int v[n*n];

    for(int i=0;i<n*n;i++)
        read>>v[i];

    for(int i=0;i<(n*n)-1;i++)
        for(int j=i+1;j<n*n;j++)
            if(v[i]>v[j])
                swap(v[i],v[j]);

    for(int i=0;i<n*n-1&&nr1==0;i++){
        if(v[i]!=0&&v[i+1]!=0&&v[i+1]-v[i]!=1)
            nr1=v[i]+1;

    }
    for(int i=n*n-1;i>=1&&nr2==0;i--){
        if(v[i]!=0&&v[i-1]!=0&&v[i]-v[i-1]!=1)
            nr2=v[i]-1;
    }
    write<<nr1<<" "<<nr2;


    return 0;
}
