#include <iostream>
#include <fstream>
using namespace std;
int n, S[10];
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
    if(S[k] == k)
        return false;
    for(int i=0; i<k; i++)
        if(S[k] == S[i])
        return false;
    return true;
}
bool solutie(int k){
    if(k == n)
        return true;
    return false;
}
void afisare(int k, ofstream& of){
    for(int i=1; i<=k; i++)
        of<<S[i]<<" ";
    of<<endl;
}
int main()
{
    ifstream read("permpf.in");
    ofstream write("permpf.out");
    read>>n;
    BK(1, write);
    return 0;
}
