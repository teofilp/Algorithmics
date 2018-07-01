#include <iostream>

using namespace std;
int ap[10000];

int main()
{
    int n, ok=0, maxi=-1;
    cin>>n;
    for(int i=0; i<n; i++){
        int c;
        cin>>c;
        if(c>maxi)
            maxi=c;
        ap[c]++;

    }
    for(int i=0; i<=maxi; i++)
        if(ap[i]%2)
        ok++;
    if(ok > 1)
        cout<<"NU";
    else
        cout<<"DA";
    return 0;
}
