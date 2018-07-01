#include <iostream>

using namespace std;
bool x = false;
int v[10000];
void impare(int left, int right){
    int m;
    if(left!=right){
        m = (left+right)/2;
        if(v[m]%2)
        x = true;
        impare(left, m);
        impare(m+1, right);
    }
    else
        if(v[left]%2)
            x = true;
}
int main()
{
    int n;
    cin>>n;

    for(int i=0 ; i<n; i++)
        cin>>v[i];
    impare(0, n-1);
    if(x)
        cout<<"DA";
    else
        cout<<"NU";

    return 0;
}
