#include <iostream>

using namespace std;

int main()
{
   int n,d=1,s=0;
   cin>>n;
   while(d<=n){
    if(n%d==0)
        s+=d;
    d++;
   }
   if(s==2*n)
    cout<<n<<" "<<"este perfect";
   else
    cout<<n<<" "<<"nu este perfect";
    return 0;
}
