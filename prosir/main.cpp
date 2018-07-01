#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{

    ifstream read("prosir.in");
    ofstream write("prosir.out");
    string n;
    getline(read,n);

    for(string :: iterator it=n.begin();it!=n.end();++it)
    {
        if((*(it+1)==' '&&isalpha(*it))||(*(it+1)=='.'&&isalpha(*it)))
            *it='5';

    }
    for(int i=0;i<n.size();i++)
        write<<n[i];

    return 0;
}
