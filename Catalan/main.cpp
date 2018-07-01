#include <iostream>

using namespace std;
unsigned long int catalanDynamic(unsigned long int n){
    unsigned long int catalan[n+1];
    catalan[0] = catalan[1] =1;
    for(int i=2;i<=n;i++)
    {
        catalan[i]=0;
        for(int j=0;j<i;j++)
        catalan[i]+=catalan[j]*catalan[i-j-1];
    }
    return catalan[n];
}
unsigned long int catalan(unsigned long int n){
    if(n<=1)
        return 1;
    unsigned long int res=0;
    for(int i=0;i<n;i++)
        res+=catalan(i)*catalan(n-i-1);
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<catalanDynamic(n);
    return 0;
}
