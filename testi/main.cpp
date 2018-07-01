#include <iostream>
#include <strings.h>
#include <set>
#include <fstream>
using namespace std;


int S[100];
int n;
bool valid(int k, ofstream& of);
bool solutie(int k, ofstream& of);
void afisare(int k, ofstream& of);
void BK(int k, ofstream& of){
    for(int i=n; i>=1; i--){
        S[k] = i;
        if(valid(k, of))
            if(solutie(k, of))
                afisare(k, of);
            else
                BK(k+1,of);


    }

}
bool valid(int k, ofstream& of){
    for(int i=0; i<k; i++)
        if(S[k] == S[i])
        return false;
    return true;

}
bool solutie(int k, ofstream& of){
    if(k == n-1)
        return true;
    return false;
}
void afisare(int k, ofstream& of){

    for(int i=0; i<n; i++)
     of<<S[i]<<" ";
    of<<endl;
}

int main()
{
    ifstream read("permutari1.in");
    ofstream write("permutari1.out");
    read>>n;

    BK(0, write);

    read.close();
    write.close();

    return 0;
}

