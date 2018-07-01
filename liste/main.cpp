#include <iostream>
#include <vector>
using namespace std;
struct elev{
    string nume;
    int v;
    elev *urm;
};
void add(elev *v){


}

int main()
{
    elev e1,e2,e3;

    elev *start=&e1;
    e1.nume="ana#1";
    e1.v=9;
      e2.nume="ana#2";
    e2.v=9;
     e3.nume="ana#3";
    e3.v=9;
    e1.urm=&e2;
    e2.urm=&e3;
    e3.urm=NULL;
    while(start!=NULL){
        cout<<start->nume<<" ";
        start=start->urm;
    }


    return 0;
}
