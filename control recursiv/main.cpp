#include <iostream>

using namespace std;
struct obiect{
    int nr;
    int ct;

};
int control (int n){
    if(n<10)
        return n;

    return control(control(n/10)+n%10);

}
int main()
{
    obiect v[100];
    for(int i=0;i<100;i++){
        v[i].nr=i;
        v[i].ct=control(i);

    }
    for(int i=0;i<99;i++){
        for(int j=i+1;j<100;j++)
            if(v[i].ct>=v[i+1].ct)
            swap(v[i],v[i+1]);

    }

    for(int i=0;i<100;i++)
        cout<<v[i].ct<<" ";



    return 0;
}
