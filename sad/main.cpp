#include <iostream>

using namespace std;

int main()
{
   int *v = new int[12];
   cout<<v<<endl;
   for(int i=0;i<12;i++)
    v[i]=i+1;
   for(int i=0;i<12;i++)
    cout<<v[i]<<" ";
   delete []v;


  v = new int[12] ;
      cout<<v<<endl;
      delete []v;
      cout<<v<<endl;
    return 0;
}
