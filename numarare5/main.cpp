#include <iostream>

using namespace std;
int suma(int a){
    int s=0;
    while(a){
        s+=a%10;
        a/=10;
    }
    return s;

}
int main()
{
    int n, c=0;
    cin>>n;
    int *v = new int[n];
    int *m = new int[n];
    for(int i=0; i<n; i++)
        cin>>v[i];
    for(int i=0; i<n; i++)
       m[i] = v[i]%suma(v[i]);

    for(int i=0; i<n; i++)
        cout<<m[i]<<" ";
    return 0;
}
