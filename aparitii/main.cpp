#include <iostream>
#include <fstream>
using namespace std;
int ap(int n, int k){
    while(n){
        if(n%10==k)
            return 1;
            n/=10;
    }
    return 0;

}
int main()
{
        ifstream read("aparitii.in");
        ofstream write("aparitii.out");

    int n,k,c=0;
    read>>n>>k;
    for(int i=0;i<=n;i++)
        if(ap(i,k))
        c++;

    write<<c;

    return 0;
}
