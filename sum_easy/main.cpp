#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   // ifstream read("easy_sum.in");
   // ofstream write("easy_sum.out");
    int n;
    unsigned long int res=0, s=0;
    cin>>n;
    int *v = new int[n];
    for(int i=0; i<n; i++)
        v[i]=i+1;

    for(int k=1;k<=n;k++){
        for(int i=0; i<n-k+1; i++){
             for(int j=i; j<i+k;j++)
            s+=v[j];

        }

        res+=s;
        s=0;    }



    cout<<res%1000000007;
    return 0;
}
