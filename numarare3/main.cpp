#include <iostream>

using namespace std;
bool prime(int a, int b){
    int r;
    while(b){
        r = a%b;
        a=b;
        b=r;
    }
    if(a==1)
        return true;
    else
        return false;
}
int main()
{
    int n,c=0;
    cin>>n;
    int *v = new int[n];
    for(int i=0; i<n; i++)
        cin>>v[i];
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++)
        if(prime(v[i], v[j]))
            c++;
    }
    cout<<c;
    return 0;
}
