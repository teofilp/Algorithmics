#include <iostream>

using namespace std;
bool x = false;
int v[10000];
bool prime(int n){
    if(n<2)
        return true;
    else if(n==2)
        return false;
    else if(n%2==0)
        return false;
    else
        for(int i=3; i*i<=n; i++)
            if(n%i==0)
                return false;
    return true;

}
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
        if(prime(v[left]))
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
