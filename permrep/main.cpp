#include <iostream>
#include <strings.h>
#include <set>
#include <fstream>
using namespace std;
ifstream read;
ofstream write;

int S[100];
int n;
bool valid(int k);
bool solutie(int k);
void afisare(int k);
void BK(int k){
    for(int i=1; i<=n; i++){
        S[k] = i;
        if(valid(k))
            if(solutie(k))
                afisare(k);
            else
                BK(k+1);


    }

}
bool valid(int k){
    for(int i=0; i<k; i++)
        if(S[k] == S[i])
        return false;
    return true;

}
bool solutie(int k){
    if(k == n-1)
        return true;
    return false;
}
void afisare(int k){

    for(int i=0; i<n; i++)
     cout<<S[i]<<" ";
    cout<<endl;
}

int main()
{
    read.open("permutari.in");
    write.open("permutari.out");
    cin>>n;

    BK(0);

    read.close();
    write.close();

    return 0;
}

