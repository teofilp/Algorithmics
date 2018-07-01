#include <iostream>

using namespace std;
int nr_prim(int n){
    int ok=1,ok1=1,p2;
    if(n<2)
        return 2;
    else

  for(int i=n+1;ok==1;i++){
    for(int j=2;j*j<=n&&ok1==1;j++){
        if(i%j==0)
        ok1=0;
    }
        if(ok1){
            p2=i;
            ok=0;
        }

        ok1=1;


  }
    return p2;
}
int main()
{
    int n;
    cin>>n;
    cout<<nr_prim(n);




    return 0;
}
