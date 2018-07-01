#include <iostream>
#include <fstream>
using namespace std;
struct produs{
    int pv;
    int pn;
    double reducere;
};
int main()
{
    ifstream read("blackfriday.in");
    ofstream write("blackfriday.out");

    int n, maxi=-1, pozi;
    read>>n;
    produs *v = new produs[n];
    for(int i=0; i<n; i++)
        read>>v[i].pv;
    for(int i=0; i<n; i++){
        read>>v[i].pn;
        v[i].reducere = 100*(1-(double(v[i].pn)/double(v[i].pv)));
    }
    for(int i=0; i<n; i++){
            if(v[i].reducere>maxi){
                maxi = v[i].reducere;
                pozi = i+1;
            }


    }

    write<<pozi;

    return 0;
}
