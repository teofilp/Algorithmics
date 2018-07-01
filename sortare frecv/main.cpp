#include <iostream>

using namespace std;
int v[1000];
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        v[x]++;
    }
    for(int i=0; i<=100; i++)
        for(int j=0; j<v[i]; j++)
        cout<<i<<" ";
    return 0;
}


int main(){


    int n;
    cin>>n;

    while(n!=0){
        v[n%10]++;
        n=n/10;

    }



    return 0;

}
