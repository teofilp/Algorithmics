#include <iostream>
#include "punct.h"
using namespace std;
typedef punct<int> punctInt;
int main()
{
   punctInt a(10,20);
   punctInt b(20,30);
   punctInt c=a + b;
   cout<<c.getX()<<endl;
   cout<<c.getY()<<endl;
    return 0;
}
