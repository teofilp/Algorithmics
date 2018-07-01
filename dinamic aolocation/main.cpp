#include <iostream>

using namespace std;

int main()
{
  /*  int a[1];
    a[0]=1;
    cout<<*a<<" "<<a[0]<<endl;
    *(new int) = 60;
    cout << *(new int) << endl;     ///free space in memory after compiling

    int *p = new int;
    *p = 50;
    cout << *p << endl;

    delete p;

    cout<< *p << endl;
    */

    int amount;
    cin>>amount;
    int *p = new int[amount];

    for(int i=0;i<amount ;i++){
        p[i]=i;

    }
    for(int i=0;i<amount;i++)
        cout<<p[i]<< endl;

    delete []p;

    return 0;
}
