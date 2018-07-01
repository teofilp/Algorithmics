#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int v[100];
   v[0]=1;
   v[1]=v[0];
   for(int i=2;i<100;i++)
    v[i]=v[i-1]+v[i-2];

   for(int i=0;i<45;i++)
    cout<<v[i]<<endl;

    return 0;
}
