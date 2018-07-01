#include <iostream>

using namespace std;
int v[1000];
bool c = true;
int diviD(int left,int right){
    int m, i, j;
    if(left!=right){
        m  = (left+right)/2;
        i = diviD(left, m);
        j = diviD(m+1, right);

    }
    else
        if(v[left]%2)
        c = false;


}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>v[i];
    diviD(0, n-1);
    if(c == true)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
