#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main()
{
    ifstream read("egale.in");
    ofstream write("egale.out");
    int n,a,b, k=1, j=1,ok=0;
    cin>>n;
    if(n==1){
            cin>>a>>b;
    for(int i=a; i<=b; i++){
        if(i<10*k)
        {
            if(i%j==0)
                cout<<i<<" ";
                ok=1;

        }
        else
        {
            j = 10*k + j;
            k = k*10;
            ok=0;

        }
        if(ok)
        i+=j-1;
    }

    }
    else{
            read>>b;
        for(int i=1; i<pow(10,b); i++){
            if(i<10*k)
        {
            if(i%j==0)
                write<<i<<" ";
                ok=1;

        }
        else
        {
            j = 10*k + j;
            k = k*10;
            ok=0;

        }
        if(ok)
        i+=j-1;
        }


    }

       return 0;
}
