#include <iostream>
#include "persoane.h"
using namespace std;




int main()
{
    persoana tudor;
    tudor.setAge(20);
    tudor.setNume("");
    cout<<tudor.getNume()<<endl;
    cout<<tudor.getAge()<<endl;
    return 0;
}
