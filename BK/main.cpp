#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;
int n, m, S[100], contor;
bool valid(int k);
bool solutie(int k);
void afisare(int k, ofstream& of);
void BK(int k, ofstream& of){
    for(int i=1; i<=n; i++){
        S[k] = i;
        if(valid(k))
            if(solutie(k))
                afisare(k, of);
            else
                BK(k+1, of);
    }
}
bool valid(int k){
    if(k == 1)
        return true;
    for(int i=1; i<k; i++)
        if(S[k] == S[i]||((S[k]+S[i])%(S[k]-S[i]))||S[i]>S[k])
            return false;



    return true;
}
bool solutie(int k){

    if(k == m)
        return true;
    return false;
}
void afisare(int k, ofstream& of){
    contor++;
    for(int i = 1; i<=m; i++)
        of<<S[i]<<" ";
    of<<endl;

}
int main()
{
    ifstream read("sirab.in");
    ofstream write("sirab.out");
    read>>n>>m;
    BK(1, write);
    if(contor == 0)
        write<<"0";
    return 0;
}
