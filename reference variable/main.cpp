#include <iostream>

using namespace std;

void  swapp(int &, int &);
int main()
{      int a=10;
    int b=20;
    swapp(a,b);

    cout<<a<<" "<<b<<endl;


    /*

    cout<<"Value of Variable: "<<name<<" address of Variable is: "<<&name<<endl;
    string name="Agnes";

    cout<<"Value of Variable: "<<name<<" address of Variable is: "<<&name<<endl;

        string & nr_6=name;

    cout<<"Value of Variable: "<<name<<" address of Variable is: "<<&name<<endl;
    cout<<"Value of Variable: "<<name<<" address of Variable is: "<<&name<<endl;
     cout<<"Value of Variable: "<<nr_6<<" address of Variable is: "<<&nr_6<<endl;

     nr_6="Scott";

    cout<<"Value of Variable: "<<name<<" address of Variable is: "<<&name<<endl;
    cout<<"Value of Variable: "<<name<<" address of Variable is: "<<&name<<endl;

     cout<<"Value of Variable: "<<nr_6<<" address of Variable is: "<<&nr_6<<endl;
    cout<<"Value of Variable: "<<name<<" address of Variable is: "<<&name<<endl;
     */

     /*
     ref var must be initialized when created;
     ref var can't change associations/connections
     ref var must be the same type as associated variable

     */

    return 0;
}
void swapp(int &a,int &b){

int t;
t=a;
a=b;
b=t;


   }
