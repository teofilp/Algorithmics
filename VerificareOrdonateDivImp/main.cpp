#include <iostream>

using namespace std;
bool ok = true;
long long v[500];
long long n;
int cateCifre(long long n){
    int c=0;
    while(n){
        c++;
        n/=10;
    }
    return c;

}

int divImp(int left, int right){
    int m , i, j;
    if(left!=right)
    {
        m = (left+right)/2;
        i = divImp(left, m);
        j = divImp(m+1, right);

    }
    else
        if(cateCifre(v[left])%2)
            ok = false;

}
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>v[i];
    divImp(0, n-1);
    if(ok)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
