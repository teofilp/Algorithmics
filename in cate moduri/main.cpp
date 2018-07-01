#include <iostream>

using namespace std;

int main()
{
   int n,s,c=0,t;
   cin>>n;

   for(int i=1;i<=n/2;i++){
        s=0;
        t=i;
        while(s<n){
            s+=t;
            t++;


        }
        if(s==n)
            c++;


   }

   cout<<c;
    return 0;
}
