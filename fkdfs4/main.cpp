#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream read("fisier.in");
    ofstream write("fisier.out");

    int n,i=0,nr=1,maxim=-1;
    char c;
    while(read>>c){
        c=read.get();
        if(c!='\n'){
            nr++;
        }
        else{
            if(nr>maxim){
                maxim=nr;
                i=1;
                nr=1;
            }
            if(nr==maxim){
                i++;
                nr=1;

            }
            if(nr<maxim)
                nr=1;


        }
    }
    cout<<i;
    return 0;
}
