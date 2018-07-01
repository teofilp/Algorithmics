#include <iostream>

using namespace std;

int main()
{
    int n,ok=0,i1,l=0,lmax=0;
    cin>>n;
    int *v= new int[n];
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n-2;i++){

        if(v[i]%2!=v[i+1]%2&&ok==0)
        {
            ok=1;
            i1=i;
            l=2;
            if(l>lmax)
                lmax=l;
        }
        if(v[i]%2!=v[i+1]%2&&ok==1){
            l++;
            if(l>lmax)
                lmax=l;
        }
         if(v[i]%2==v[i+1]%2&&ok==1){
            ok=0;
            l=0;
         }

    }
    cout<<i1<<" "<<lmax<<endl;
    for(int i=i1;i<lmax;i++)
        cout<<v[i]<<" ";

    return 0;
}
