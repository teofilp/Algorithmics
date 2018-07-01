#include <iostream>
#include <fstream>
using namespace std;
int S[10], n, l;
bool valid(int k);
bool solutie(int k);
void afisare(int k, ofstream& of);
void BK(int k, ofstream& of){
    for(int i=1; i<=n; i++)
    {
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
    if(S[k]<S[k-1])
        return false;


    for(int i=0; i<k; i++)
    if(S[k] == S[i])
        return false;

    return true;
}
bool solutie(int k){
    if(k == l)
        return true;
    return false;
}
void afisare(int k, ofstream& of){
    for(int i=1; i<=l; i++ )
        cout<<S[i]<<" ";
    cout<<endl;


}
int main()
{
    ifstream read("submultimi.in");
    ofstream write("submultimi.out");
    cin>>n;
    for(int i=1; i<=n; i++){

        l = i;
        BK(1, write);
    }

    return 0;
}
