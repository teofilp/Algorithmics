#include <iostream>

using namespace std;

int main()
{
    for(int i=1, j=1;i<=10&&j<=10;i++){
            cout.width(3);
        cout<<i*j;
        if(i==10){
            j++;
            i=1;
            cout<<endl;
        }

    }
    return 0;
}
