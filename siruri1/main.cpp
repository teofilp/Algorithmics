#include <iostream>
#include <algorithm>
using namespace std;
struct sir{
    int numar;
    int pozi;

};
int main()
{
    int n;
   cin>>n;
   sir v[n];
   int w[n];
   int k=1;

   for(int i=0;i<n;i++)
   {
       cin>>v[i].numar;
       v[i].pozi=i;
   }
   for(int i=0;i<n-1;i++)
   {
       for(int j=i+1;j<n;j++)
        if(v[i].numar>v[j].numar)
        swap(v[i],v[j]);

   }
   for(int i=0;i<n;i++,k++){
        w[v[i].pozi]=k;
   }

   for(int i=0;i<n;i++)
    cout<<w[i]<<" ";





    return 0;
}
