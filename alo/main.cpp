#include <iostream>
#include <fstream>
using namespace std;
struct alo{
    int numar;
    int minu;


};
int pc(int n)
{
    int p;
    while(n){
        p=n%10;
        n/=10;
    }
    return p;
}
    int main()
{
    ifstream read("alo.in");
    ofstream write("alo.out");
    int E,n;
    read>>E>>n;
    alo conv[n];
    for(int i=0;i<n;i++)
        read>>conv[i].numar>>conv[i].minu;
    for(int i=0;i<n;i++){
        if(pc(conv[i].numar)==2&&conv[i].numar%10==5)
            E+=conv[i].minu;
        if(pc(conv[i].numar)==1&&conv[i].numar%10==5)
            E-=2*conv[i].minu;


    }

    write<<E;

    return 0;
}
