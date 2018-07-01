#include <iostream>
#include <fstream>
using namespace std;
unsigned long long v[10000];
int main()
{
    ifstream read("rica.in");
    ofstream write("rica.out");
    int n;
    read>>n;
    v[0] = v[1] = 1;
    v[2] = 2;
    v[3] = 4;
    for(int i=3; i<=n; i++)
        v[i+1] = 2*v[i]-v[i-3];
    write<<v[n-1];
    return 0;
}
