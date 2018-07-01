#include <iostream>

using namespace std;
int v[500];
bool ok=true;
int Exista(int left, int right){
    int m, i, j;
    if(left!=right){
        m = (left+right)/2;
        i = Exista(left, m);
        j = Exista(m+1, right);
    }
        else
            if(v[left]!=v[0])
            ok = false;


}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>v[i];
    Exista(0, n-1);
    if(ok)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
