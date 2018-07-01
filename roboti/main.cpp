#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
    ifstream read("roboti2.in");
    ofstream write("roboti2.out");
    int v,n,c=1,maxc=0,contor=0;
    read>>v>>n;
     int *m= new int[n];
        for(int i=0;i<n;i++){
            read>>m[i];

        }
    if(v==1){



        int *w = new int[2*n];
        for(int i=0,j=0;i<2*n;i++,j++){

            w[i]=m[j];
             if(j==n-1)
                j=-1;
        }
        for(int i=0;i<2*n;i++){
            if(w[i]<w[i+1])
            c++;
            else
            c=1;
            if(c>maxc)
            maxc=c;

        }
    write<<maxc;
    }
    if(v==2){

        sort(m, m+n);

        int *ord= new int[n];
        ord[0]=m[0];
        for(int i=1;i<n;i++){
           if(i%2)
            ord[i-contor]=m[i];
           else{
            ord[n-i+contor+1]=m[i];
            contor++;

           }


        }

    for(int i=0;i<n;i++)
        write<<ord[i]<<" ";



    }
    return 0;
}
