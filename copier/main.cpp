#include <iostream>
#include "test.h"
using namespace std;

int main()
{
   int a = 10;
   int b = a;
   a=60;


   cout<< a << endl;
   cout<< b << endl;

   Test obj1(50,100,60);
   Test obj2=obj1;
   *(obj1.p)=700;
   cout<<obj1.x<<endl;
    cout<<obj1.y<<endl;
    cout<<*(obj1.p)<<endl;

    cout<<obj2.x<<endl;
    cout<<obj2.y<<endl;
    cout<<*(obj2.p)<<endl;

    return 0;
}
