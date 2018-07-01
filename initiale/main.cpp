#include <iostream>
#include <string.h>
using namespace std;

int main()
{
   string n;
   getline(cin,n);
   n[0]=n[0]-32;

   for(int i=0;i<n.size();i++)
   {    if(isalpha(n[i])){
    if(n[i+1]==' '&&n[i]!=' ')
        n[i]=n[i]-32;
               if(n[i-1]==' '&&n[i]!=' ')
        n[i]=n[i]-32;
        if(i==n.size()-1)
            n[i]=n[i]-32;
   }


   }
   for(int i=0;i<n.size();i++)
    cout<<n[i];

    return 0;
}
