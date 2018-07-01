#include <iostream>

using namespace std;
int numar(int n, int k, int x=0){
    int *v= new int[10];
    for(int i=0;i<10;i++)
        v[i]=0;
    while(n){
        v[n%10]++;
        n/=10;

    }

    int contor=0;

        for(int i=9;contor<k&&i>=0;i--){
          for(int j=0;j<v[i]&&contor<k;j++){
              x=x*10+i;
              contor++;
          }

        }

    return x;
}
int main()
{
    cout << numar(275944,5);
    return 0;
}
