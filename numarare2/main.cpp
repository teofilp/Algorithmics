#include <iostream>

using namespace std;

int main()
{
    int n, c=0;
    double s;
    cin>>n;
    int *v = new int[n];
    for(int i=0; i<n; i++){
        cin>>v[i];
        s+=v[i];
    }
    s/=n;
    for(int i=0; i<n; i++){
        if(v[i]>s)
            c++;
    }
    cout<<c;
    return 0;
}
