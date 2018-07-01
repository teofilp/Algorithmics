#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

int main()
{
    int n, difmax = INT_MIN;
    cin>>n;
    int *v = new int[n];
    for(int i=0; i<n; i++)
        cin>>v[i];
    for(int i=0; i<n-1; i++)
        for(int j = i+1; j<n; j++){
            if(v[i] - v[j]>difmax)
                difmax = v[i] - v[j];
    }
    cout<<difmax;
    return 0;
}
