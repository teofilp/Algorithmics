#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream f("date.in");
ofstream g("date.out");
///Se citeste un sir de n numere intregi. Verificati daca vectorul are aspect de vale.
int main()
{
    int n,i,X[100],minim=INT_MAX,pmin;
    bool ok=1, coborare = 1, urcare = 1;
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>X[i];
    for(i=1; i<=n; i++)
        if(X[i]<minim)
        {
            minim=X[i];
            pmin=i;
        }
    for(i=1; i<pmin; i++)
            if(X[i]>X[i+1])coborare=0;
    for(i=pmin; i<n; i++)
            if(X[i]<X[i+1])urcare=0;
    if(coborare&&urcare) cout<<"da";
    else cout<<"nu";
    return 0;
}
