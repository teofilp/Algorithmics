#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int n;
   double p=1;
   cin>>n;
   if(n){
    for(int i=1;i<=n;i++)
    p=p*i;
   cout<<fixed<<setprecision(0)<<p;
   }
   else
    cout<<1;

    return 0;
}
