#include <iostream>
#include <fstream>
struct obiect{
    double G;
    double P;
    double R;

};
using namespace std;

int main()
{   ifstream read("rucsac.in");
    ofstream write("rucsac,out");

    int n,gmax,s=0;
    read>>n>>gmax;
    obiect v[n];

    for(int i=0;i<n;i++)
    {   read>>v[i].G>>v[i].P;
        v[i].R=v[i].P/v[i].G;

    }
    for(int i=0;i<n-1;i++)
    {for(int j=i+1;j<n;j++)
        if(v[i].R<v[j].R)
            swap(v[i],v[j]);

    }
    for(int i=0;i<n&&gmax>0;i++){
        if(gmax-v[i].G>=0){
              gmax=gmax-v[i].G;
              s+=v[i].P;

        }
        else
        {
            s+=gmax*v[i].R;
            gmax=0;
        }

    }
    cout<<s;
    return 0;
}
