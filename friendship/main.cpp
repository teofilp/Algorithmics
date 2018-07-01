#include <iostream>
#include "test.h"
using namespace std;

int main()
{
    B objB;
    A objA;
    objA.setSecretValue(objB,600);
    cout<<objB.getSecretValue()<<endl;
    return 0;
}
