#include <iostream>

using namespace std;

int main()
{

    cout<< (10 & 2)<<endl;
    /*
    & ambii biti trebuie sa fie 1
    1 0 1 0
    0 0 1 0
    -------
    0 0 1 0
    */
    cout<< ( 10 | 2 )<<endl;
    /*
    | cel putin un bit trebuie sa fie 1
    1 0 1 0
    0 0 1 0
    -------
    1 0 1 0
    */
    cout<< ( 10 ^ 2 )<<endl;
    /*
    ^ un singut bit poate fi 1
    1 0 1 0
    0 0 1 0
    -------
    1 0 0 0


    */
    cout<< ( ~10 )<<endl;
    /*
    ~ se schimba din 1 in 0 si invers
    1 0 1 0
    -------
    0 1 0 1
    */

    cout<< ( 10 << 1)<<endl;

    /*
    << muta valoarea bitului in dreapta cu o pozitie
   0000000000000000000000000000000000000 1 0 1 0
   0000000000000000000000000000000000001 0 1 0 0

    */
    cout<< ( 10 << 3)<<endl;
    /*
    10 inmultit cu 2 la puterea 3
    80


    */
    cout<< ( 10 >> 1 )<<endl;
    /*
    >> muta valoarea bitului in stanga cu o pozitie
    0000000000000000000000000000000000000 1 0 1 0
    0000000000000000000000000000000000000 0 1 0 1


    */

    cout<< ( 10 >> 1 )<<endl;
    /*
    dividem 10 la 2 la puterea 3

    */


    return 0;
}
