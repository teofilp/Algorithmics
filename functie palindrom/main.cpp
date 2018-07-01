#include <iostream>

using namespace std;
int palindrom(int n){
    int cn=n;
    int s=0;
    while(cn){
        s=s*10+cn%10;
        cn=cn/10;
    }
    if(s==n)
        return 1;
    else
        return 0;

}
int main()
{
    for(int i=1;i<10000;i++)
    if(palindrom(i))
        cout<<i<<" ";



    return 0;
}
