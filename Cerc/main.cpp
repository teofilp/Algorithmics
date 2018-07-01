#include <iostream>
#include <algorithm>
using namespace std;
struct per{
    int nr, st, dr;
};

per *v;
bool sorti(per a, per b){
    if(a.nr<b.nr)
        return true;
    return false;
}
int main()
{
    int n;
    cin>>n;
    per *v= new per[n];
    for(int i=0; i<n; i++){
        cin>>v[i].nr;
        v[i].st = -1;
        v[i].dr = -1;
    }
    sort(v, v+n, sorti);
    v[n-1].st =  n-3;
    v[n-1].dr = n-2;
    v[n-2].st = n-1;
    v[n-3].dr= n-1;
    v[0].st = 2;
    v[0].dr = 1;
    v[1].st = 0;
    v[2].dr = 0;
    for(int i=1; i<n-1; i++){
        bool ok = false;
        for(int j = i+1; j<n&&ok==false; j++){
            if(i!=1&&j!=2&&v[i].dr == -1&& v[j].st == -1){
                v[i].dr = j;
                v[j].st = i;
                ok = true;
            }
            if(i == v[j].st&&i!=2){
                v[i].dr = j;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<"nr e"<<v[i].nr<<" st: "<<v[i].st<<" dr: "<<v[i].dr<<endl;
    }

    return 0;
}
