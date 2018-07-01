#include <iostream>

using namespace std;

int impare(int n){
    int b=0;
    int p=1;
    while(n){
        if((n%10)%2){
           b+=p*(n%10);
        p*=10;
        }

        n/=10;


    }
    return b;

}
int impare_recursiv(int n){
    if(n<10&&n%2)
        return n;
    if(n<10&&n%2==0)
        return 0;

        return impare_recursiv(n%10)+10*impare_recursiv(n/10);

}
int main()
{
   cout<<impare_recursiv(201357);
    return 0;
}
