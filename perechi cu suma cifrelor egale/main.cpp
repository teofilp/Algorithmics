#include <iostream>

using namespace std;
int suma(int n){
    int s=0;
    while(n){
        s+=n%10;
        n/=10;
    }
    return s;
}
int main()
{
    int v[]={12,9,54,32,222,49,34,6,1,91},n=10;
    for(int i=0;i<10;i++){
        for(int j=1;j<10;j++){
            if(suma(v[i])==suma(v[j])&&i!=j)
                cout<<v[i]<<" "<<v[j]<<endl;
        }
    }


    return 0;
}
