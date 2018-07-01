#include <iostream>
#include <cmath>
using namespace std;
int dublare1(int n){
    int c=0, nr=0, cn;
    cn=n;
    while(cn){
        nr++;
        c=cn%10;
        cn/=10;

    }
    return c*(pow(10,nr))+n;
}
int main()
{
    cout<<dublare1(83464456);
    return 0;
}
