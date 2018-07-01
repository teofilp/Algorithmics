#include <iostream>

using namespace std;

int main()
{
    int n, c=-1;
    int x;
    cin>>x;
    int ul = x%10;
    while(x){
        if(x%10 == ul)
            c++;
        ul = x%10;
        cin>>x;
    }
    cout<<c;
    return 0;
}
