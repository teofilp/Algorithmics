#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
   int za[7];
   int zb[7];
   int zc[14];
   for(int i=0;i<7;i++){
     za[i]=rand()%6;
     zb[i]=rand()%6;
   }
   int j=0;
   for(int i=0;i<14;j++){
    zc[i]=za[j];
    i++;
    zc[i]=zb[j];
    i++;
   }
   for(int i=0;i<7;i++)
    cout<<za[i]<<" ";
   cout<<endl;
   for(int i=0;i<7;i++)
    cout<<zb[i]<<" ";
   cout<<endl;
   for(int i=0;i<14;i++)
    cout<<zc[i]<<" ";

    return 0;
}
