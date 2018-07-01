#include <iostream>
#include "our_first_class.h"
using namespace std;

int main()
{
    personalData person;
    personalData person2;



    person2.setAge(25);
    cout<<person.getAge()<< endl;
    cout<<person2.getAge()<<endl;
    return 0;
}
