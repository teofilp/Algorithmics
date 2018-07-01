#include <iostream>

using namespace std;

int main()
{
   int a[3];
   int *p=&a[0];

   a[0]=1;
   a[1]=2;
   a[2]=3;
   cout<<a<<endl;
   cout<<&a[0]<<endl;
   cout<<p<<endl;

   cout<<endl<<endl<<endl;

        cout<<&a[0]<<endl;
        cout<<&a[1]<<endl;
        cout<<&a[2]<<endl;

        cout<<endl<<endl<<endl;

        cout<<a<<endl;
        cout<<a+1<<endl;
        cout<<a+2<<endl;

        cout<<endl<<endl<<endl;

        cout<<*a<<endl;
        cout<<*(a+1)<<endl;
        cout<<*(a+2)<<endl;

        int *p2=&a[0];

        cout<<







    return 0;
}
