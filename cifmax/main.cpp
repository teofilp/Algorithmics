#include <iostream>
#include <strings.h>
// 48 57
using namespace std;
int v[10];
int main()
{
    int maxi=0,nr;
    string st;
    getline(cin, st);
    for(int i=0; i<st.size(); i++)
        if(int(st[i])>=48 && int(st[i])<= 57)
        v[int(st[i])-48]++;
    for(int i=0; i<10; i++)
        if(v[i]>maxi){
            maxi = v[i];
            nr=i;
        }

    cout<<nr;

    return 0;
}
