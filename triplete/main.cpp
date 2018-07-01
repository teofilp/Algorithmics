#include <iostream>

using namespace std;

int main()
{
   int v[]={2,9,41,61,6,24,84,1,21},n=9;
   for(int i=0;i<7;i++){
    if(v[i]<v[i+1]&&v[i+1]<v[i+2]){
        cout<<v[i]<<" "<<v[i+1]<<" "<<v[i+2];
    cout<<endl;
    }



   }
    return 0;
}
