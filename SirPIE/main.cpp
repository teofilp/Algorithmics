#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
bool prime(int a, int b){
    int r;
    while(b){
        r = a%b;
        a=b;
        b=r;
    }
    if(a==1)
        return true;
    else
        return false;

}
int S[10], v[10],n;
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
                BK(k+1, of);

    }


}
bool valid(int k){
    if(k==0)
        return true;
    for(int i=0; i<k; i++)
        if(!(prime(v[S[i]], v[S[i+1]])))
            return false;
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
void afisare(int k, ofstream& of){
    for(int i=0; i<n; i++)
        of<<v[S[i]]<<" ";
    of<<endl;

}
int main()
{
    ifstream read("sirpie.in");
    ofstream write("sirpie.out");
    read>>n;
    for(int i=0; i<n; i++)
        read>>v[i];
    sort(v, v+n);
    BK(0, write);
    return 0;
}
