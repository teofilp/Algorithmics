#include <iostream>
#include <fstream>
using namespace std;

int main()
{   ifstream read("reactivi.in");
    ofstream write("reactivi.out");
    int n,c;
    read>>n;
    c=n;
    int mini[n],maxi[n];
    for(int i=0;i<n;i++)
    {
        read>>mini[i];
        read>>maxi[i];
    }
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
    {
        if(mini[i]<mini[j]&&maxi[i]>maxi[j])
        c--;



    }
    cout<<c;
    return 0;
}
