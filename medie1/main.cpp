#include <iostream>

using namespace std;

int main()
{
   int n,i1,i2,S=0;
   cin>>n;
   int *v = new int[n];
   for(int i=0;i<n;i++)
    cin>>v[i];
   for(int i=0;i<n;i++){
    if(v[i]%2==0)
       i1=i;
    if(i1==i)
        break;

   }
   for(int i=n-1;i>=0;i--)
   {
       if(v[i]%2==0)
        i2=i;
       if(i2==i)
        break;

   }
   for(int i=i1;i<=i2;i++)
    S+=v[i];
    if(S!=0)
   cout<<S;
   else
    cout<<"NU EXISTA";

    return 0;
}
