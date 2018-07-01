#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
struct poz{
    int nr;
    int index;
};
bool sorti(poz a, poz b){
    if(a.nr<b.nr)
        return true;
    return false;
}
int n,c;
int S[10];
poz *v;
bool valid(int k, poz v[]);
bool solutie(int k);
void afisare(int k, poz v[], ofstream& of);
void BK(int k, poz v[], ofstream& of){
    for(int i=0; i<n; i++){

        S[k] = i;
        if(valid(k, v))
            if(solutie(k))
                afisare(k,v, of);
            else
                BK(k+1,v , of);
    }

}
bool valid(int k, poz v[]){

   if(k){

        if(abs(v[S[k]].index - v[S[k-1]].index ) == 1)
            return false;
    }

    for(int i=0; i<k; i++)
        if(S[i] == S[k])
            return false;

    return true;

}
bool solutie(int k){
    if(k == n-1)
        return true;
    return false;

}
void afisare(int k, poz v[], ofstream& of){
    c++;
    for(int i=0; i<n; i++)
        of<<v[S[i]].nr<<" ";
    of<<endl;

}
int main()
{
    ifstream read("shuffle.in");
    ofstream write("shuffle.out");
    read>>n;
    poz *v = new poz[n+1];
    for(int i=1; i<=n; i++){
        int x;
        read>>x;
        v[i].nr = x;
        v[i].index = i;
    }
    sort(v, v+n+1, sorti);

    BK(0,v,write);
    if(!c)
        write<<"nu exista";

    return 0;
}
