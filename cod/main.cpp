#include <iostream>
#include <fstream>
using namespace std;

int main()
{   ifstream read("cod.in");
    ofstream write("cod.out");

    int n,maxi=0,c,ok=0,k=0;
    cin>>n;
    int v[n],m[n];
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++){
        c=v[i];
        while(c){
            if(c%10>maxi)
                maxi=c;
            c/=10;

        }
    }
    cout<<maxi;
    for(int i=0;i<n;i++)
    {   ok=0;
    c=v[i];
    while(c){
        if(c%10==maxi)
            ok=1;
    }
        if(ok)
        {
            m[k]=v[i];
            k++;
        }

    }
    for(int i=0;i<k-1;i++)
    {
        for(int j=i+1;j<n;j++)
            if(v[i]>v[j])
            swap(v[i],v[j]);

    }
   cout<<m[0];
    return 0;
}
