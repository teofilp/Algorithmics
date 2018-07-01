#include <iostream>

using namespace std;

int main()
{
{
    int *p=new int;

    *p=50;


    cout<<*p<<endl;

    delete p;
    p=NULL;

    if(p!=NULL){

        *p=60;
        cout<<*p<<endl;
    }

  ///  cout<<*p<<endl;

}






    return 0;
}
