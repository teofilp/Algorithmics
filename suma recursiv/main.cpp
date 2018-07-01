#include <iostream>

using namespace std;
/*
int srec(int n){
    if(n==1)
        return 1;
    return n+srec(n-1);

}
*/
int fib(int x) {
    if (x == 0)
        return 0;

    if (x == 1)
        return 1;

    return fib(x-1)+fib(x-2);
}
int main()
{

    cout<<fib(2);
    return 0;
}
