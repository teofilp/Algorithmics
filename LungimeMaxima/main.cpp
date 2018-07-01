#include <iostream>
#include <strings.h>
#include <fstream>
using namespace std;

int main()
{
    ifstream read("lgmax.in");
    ofstream write("lgmax.out");

    int n,c,cmax=-1;
    string maxi, st;
    read>>n;
    for(int i=0; i<=n; i++){
        c=0;
        getline(read, st);
        for(int j=0; j<st.size(); j++){
                c++;
        }
        if(c>cmax)
        {
            cmax = c;
            maxi = st;
        }

    }
    write<<maxi;

    return 0;
}
