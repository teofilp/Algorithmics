#include <iostream>

using namespace std;


struct obiect {
    int i;
    int ct;

};
int control(int n){
    int s;
    while(n>9){
        s=0;
        while(n){
            s+=n%10;
            n/=10;
        }
        n=s;

    }
return s;
}
int main()
{
    obiect v[100];


    for(int i=0;i<100;i++){
        v[i].i=i+1;
        v[i].ct=control(i);


    }
    for(int i=0;i<99;i++)
        for(int j=i+1;j<100;j++)
            if(v[i].ct>v[j].ct)
            swap(v[i],v[j]);

    for(int i=0;i<100;i++)
        cout<<v[i].i<<" ";


    return 0;
}
