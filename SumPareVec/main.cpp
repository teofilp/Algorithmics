#include <iostream>

using namespace std;
int v[1000];
int s;
int DivImp(int left, int right){
    int m, d1, d2;
    if(left!=right){
        m = (left+right)/2;
        d1 = DivImp(left, m);
        d2 = DivImp(m+1, right);
        return d1+d2;
    }
    else{
        if(v[left]%2==0)
        return v[left];
        else
        return 0;
    }


}
int main()
{
   int n;
   cin>>n;
   for(int i=0; i<n; i++)
    cin>>v[i];
   cout<<DivImp(0, n-1);
    return 0;
}
