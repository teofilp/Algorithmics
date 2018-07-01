#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, medie=0, nr=0;
    cin>>n;
    int *v = new int[n];
    for(int i=0; i<n; i++){
        cin>>v[i];
        medie+=v[i];
        if(v[i])
            nr++;

    }

    medie/=nr;
    for(int i=0; i<n; i++)
        if(v[i] == 0)
        v[i] = medie;
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
    return 0;
}
