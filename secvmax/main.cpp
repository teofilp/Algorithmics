#include <iostream>
#include <fstream>
using namespace std;

int main()
{   ifstream read("secvmax.in");
    ofstream write("secvmax.out");

   int n,s=0,k=0,kmax=0,p,u;
   read>>n;
   int v[n];
   for(int i=0;i<n;i++)
        read>>v[i];
   for(int i=0;i<n;i++){

    for(int j=i;j<n;j++){
        if(v[j]%2==0){
            k++;
            s+=v[j];
            if(v[j+1]%2==0)
                p=j;
            else
                u=j;
        }
        else
        {
            k=0;


        }
    }
   }


    return 0;
}
