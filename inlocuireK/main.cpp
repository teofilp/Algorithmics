#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{

    int k,n;
    cin>>k>>n;
    int *v = new int[n];
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
         double r = double(x)/double(k);
        if(int(r*10)%10 <= 5){
            r = r-.5;
        }
        else
            r = round(r);
        v[i] = k*r;


    }
    sort(v, v+n);
    for(int i=n-1; i>=0; i--)
        cout<<v[i]<<" ";


    return 0;
}
