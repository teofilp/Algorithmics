#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int S[11], v[11];
int n;
bool valid(int k);
bool solutie(int k);
void afisare(int k, ofstream& of);
void BK(int k, ofstream& of){
    for(int i=0; i<n; i++){

        S[k] = i;
        if(valid(k))
            if(solutie(k))
                afisare(k, of);
            else
                BK(k+1,of);
    }
}
bool valid(int k){
    for(int i=0; i<k; i++)
    {
        if(S[i] == S[k])
            return false;
    }
    return true;
}
bool solutie(int k){
    if(k == n-1)
        return true;
    return false;
}
void afisare(int k, ofstream& of){
    for(int i=0; i<=k; i++)
        of<<v[S[i]]<<" ";
    of<<endl;
}
int main()
{
    ifstream read("permutari2.in");
    ofstream write("permutari2.out");
    read>>n;
    for(int i=0; i<n; i++)
        read>>v[i];
    sort(v, v+n);
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
    BK(0, write);

    return 0;
}
