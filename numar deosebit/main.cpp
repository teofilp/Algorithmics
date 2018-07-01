#include <iostream>

using namespace std;
bool deosebit(int n){
    for(int i=n;i>0;i--){
        int c=i;
        int s=0;
        while(c){
            s+=c%10;
            c/=10;
        }
        if(s+i==n){
               cout<<i<<" ";
            return true;
        }




    }
    return false;


}
bool fctprim(int n){
    int c;
    int ok=1;

        for(int i=2;i<=n/2;i++){
                c=0;
            if(i!=2)
              for(int j=2;j<n/2;j++ )
                    if(i%j==0)
                    ok=0;

            if(ok){
                while(n%i==0){
                    n/=i;
                    c++;
                }

            }
            if(c%2==0)
                return true;
        }








    return false;
}
int main()
{
    cout<<fctprim(12);
    return 0;
}
