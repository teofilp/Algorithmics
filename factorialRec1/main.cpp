#include <iostream>

using namespace std;
int factorial(int n, int f=1){

    if(n==1)
        return 1;
    else{
        f = n * factorial(n-1);
        return f;
    }

}
int cmmdc(int a, int b, int &r){
    r =1;
    if(a==b)
    {
        r = a;
        return r;
    }
    else if(a>b)
        return cmmdc(a-b, b,r);
    else
        return cmmdc(a, b-a, r);

}
int main()
{
    int r;
    cout<<cmmdc(5, 15, r);
    return 0;
}
