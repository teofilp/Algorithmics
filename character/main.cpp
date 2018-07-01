#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  /* char n;
   cout<<"2+3 este egal cu 5?"<<endl<<"type y/n"<<endl;
   cin>>n;
   if(n=='y')
    cout<<"corect";
   else
    cout<<"gresit"; */


    char z='0';

   cout<<z<<endl;

   cout<<"randul 1"<<endl<<endl<<endl<<"am lasat 3 randuri libere";

   string nume;
   int ok=1;
   cin>>nume;
   for(int i=0;i<nume.size();i++)
    cout<<nume[i]<<endl;

   for(string ::iterator it=nume.begin();it!=nume.end();it++)
    if(!(*it>='a'&&*it<='z'))
        ok=0;


    if(ok)
        cout<<nume;
    else
        cout<<"ai introdus numele gresit";

    return 0;
}
