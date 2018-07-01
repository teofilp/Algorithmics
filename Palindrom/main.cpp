#include <fstream>
#include <iostream>
#include <strings.h>

using namespace std;
int n, ok=1;

int main()
{
    ifstream read("palindrom.in");
    ofstream write("palindrom.out");
    read>>n;
    for(int i=0; i<n; i++)
    {

        string st;
        read>>st;
        string palindrom;
        for(int j=st.size()-1; j>=0; j--)
            palindrom.push_back(st[j]);
        if(!(st==palindrom))
            ok=0;
            write<<ok<<endl;
            ok=1;

    }

    return 0;
}
