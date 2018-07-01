#include <iostream>

using namespace std;
bool prime(int n){
    if(n<2)
        return false;
    else if(n==2)
        return true;
    else if(n%2==0)
        return false;
    else
        for(int i=3; i*i<=n;i+=2)
        if(n%i==0) return false;
    return true;
}
int apartenenta(int n){
   for(int i=2; i<=5;i++)
        while(n%i==0)
        n/=i;
   if(n==1)
    return 1;
   return 0;
}
void cifminmax(int n, int &mini, int &maxi){
    mini = 9;
    maxi = 0;
    while(n){
        if(n%10<mini)
            mini=n%10;
        if(n%10>maxi)
            maxi=n%10;
        n/=10;
    }
    cout<<mini<<" "<<maxi;

}
unsigned long int sum_div(unsigned long int n,unsigned long int s=0){
    for(unsigned long int i=1; i<=n; i++)
        if(n%i==0)
        s+=i;
    return s;
}
unsigned long int pow(int a,int b,unsigned long int &P, int i=1){
    if(i==b)
        return P;
    else
        P=P*a;
    pow(a, b, P, i+1);


}
int main()
{
    cout<<prime(3);
    return 0;
}
