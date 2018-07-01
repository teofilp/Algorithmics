#include <iostream>

using namespace std;

int main()
{
    int var=5;
    cout<<*&var<<endl;

    int *p;/// shows us that it is a pointer; it shows the adress of another varible;

    p=&var;
    /// int const * p=&var; the value this pointer is pointing to cannon be changed
    cout<<*p<<endl;/// get the value of the varible which has that adress
    /// int * const p= &a; it has to be initialized when defined because it cannont change the adress
    *p= 20;
    /// const int * const p cannon change the value of the address or the adress


    cout<<var<<endl;
    cout<<*p<<endl;

    cout<<endl<<endl<<endl;


    int ordinary_variable=10;
    int *ordinary_var= &ordinary_variable;

    cout<<"ordinary_var: "<<ordinary_var<<endl;




    return 0;
}
