#include <iostream>

using namespace std;

int main()
{
    int maxi = -1;
    for(int i=0 ;i< 100; i++)
        if(i>maxi)
        maxi=i;
    cout<<maxi;
    return 0;
}
