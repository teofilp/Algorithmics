#include <iostream>
#include <fstream>
using namespace std;
ifstream read("calcule.in");
ofstream write("calcule.out");
int n,k,s,secv;
int *v;
int main()
{
    cin>>n>>k;
    int *v = new int[n];
    for(int i=0; i<n; i++)
        cin>>v[i];
    for(int k=1; k<=n; k++)
    {
        for(int j=0; j< n-k+1; j++)
        {
            s=0;
            for(int st= j; st<j+k; st++)
                s+=v[st];

                if(s%k==0)
            secv++;
        }

    }
    cout<<secv%20011;
    return 0;
}
