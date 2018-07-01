#include <iostream>

using namespace std;
void swapp(int a, int b){
    swap(a,b);
}
int main()
{
    int a=10;
    int b=3;
    swapp(a,b);
    cout<<a<<" "<<b;
    return 0;
}
