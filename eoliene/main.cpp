#include <iostream>
#include <fstream>
#include<algorithm>

using namespace std;
struct eoliene{

    int d;
    int l;
    int st;
    int en;


};
int cd(eoliene a, eoliene b){
    if(a.en>b.en)
        return 1;
    return 0;


}
int main()
{
    ifstream read("eoliene.in");
    ofstream write("eoliene.out");
   int n,c=0,k;
   read>>n;
   eoliene eol[n];
   for(int i=0;i<n;i++)
    read>>eol[i].d;
   for(int i=0;i<n;i++)
    read>>eol[i].l;
    for(int i=0;i<n;i++){
           eol[i].st=eol[i].d+eol[i].l;
           eol[i].en=eol[i].d-eol[i].l;
    }

    sort(eol,eol+n,cd);

    int t=1005001;
    for(int i=0;i<n;i++)
    {
        if(eol[i].st<t)
        {
            t=eol[i].en;
        c++;
        }

    }

    write<<n-c;
    return 0;
}
