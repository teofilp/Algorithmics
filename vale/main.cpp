#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream read("date.in");
    ofstream write("date.out");
    int n, nr ,urca=0, coboara=0;
    bool ok=true;
    read>>n;
    int *v = new int[n];
    for(int i=0; i<n; i++)
        read>>v[i];
    for(int i=0 ; i<n-1 && urca==0; i++)
    {
        if(v[i]>=v[i+1])
            coboara=1;
        else{
            urca=1;
            nr = i;
        }


    }
    for(int i=nr; i<n-1 && urca==1; i++)
        if(v[i]>v[i+1])
        urca=0;

    if(coboara==1&&urca==1)
        write<<"DA";
    else
        write<<"NU";


    return 0;
}
