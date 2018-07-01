#include <iostream>

using namespace std;

int main()
{
    int a,b,s=0,ok=0;;
    cin>>a>>b;
    for(int i=1;i<=a/4;i++){
            s=0;
        for(int j=i;j<=j+b&&ok==0&&s<a;j++)
        {
            s+=j;
            if(s==a)
                ok=1;
        }
    }
    if(ok==1)
        cout<<"DA"<<" "<<s;
    if(ok==0)
        cout<<"NU";
    return 0;
}
