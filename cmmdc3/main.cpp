#include <iostream>

using namespace std;
int v[1000];
int k;
int cmmdc(int a,int b){
    int r;
    while(b)
    {
        r = a%b;
        a = b;
        b = r;
    }
    return a;
}
int divImp(int left, int right){
    int m, i, j;
    if(left!=right){
        m = (left+right)/2;
        i = divImp(left, m);
        j = divImp(m+1, right);
        k = cmmdc(i, j);
    }
        else
            return v[left];
}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>v[i];
    divImp(0, n-1);
    cout<<k;
    return 0;
}
