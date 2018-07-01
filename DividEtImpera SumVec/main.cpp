#include <iostream>

using namespace std;
int v[1000];
int n;
int sumaVec(int left, int right){
    int i,j,m;
    if(left!=right){
        m=(left+right)/2;
        i=sumaVec(left, m);
        j=sumaVec(m+1, right);
        return i+j;
    }
    else
        return v[left];

}
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>v[i];
    cout<<sumaVec(0, n-1);

    return 0;
}
