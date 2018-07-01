#include <iostream>
#include <fstream>
using namespace std;
struct spectacol{
    int a,b;
};
int main()
{   ifstream read("spectacol.in");
    ofstream write("spectacol.out");
    int n,a,b,pos[n];
    spectacol v[n];
    for(int i=0;i<n;i++){
        pos[i]=i+1;
        cin>>a>>b;
        v[i].a=60*a+b;
        cin>>a>>b;
        v[i].b=a*60+b;
    }
   for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++)
        if(v[pos[i]].b>v[pos[j]].b)
            swap(pos[i],pos[j]);
   }
   cout<<pos[0]<<endl;
   for(int i=1,ultim=0;i<n;i++)
   {
       if(v[pos[i]].a>=v[pos[ultim]].b){
        cout<<pos[i]<<endl;
        ultim=i;
       }
   }

    return 0;
}

