#include <iostream>

using namespace std;

int main()
{
    int k;
    cin>>k;
    if(k==1)
        cout<<1;
    else if(k==2)
        cout<<2;
    else{
        int c = 2;
        int n = 3;
        int x = 0;
        while(c<k){
            while(x<n&&c<k){
                x++;
                c++;
            }
            if(x==n)
                n++;
            while(x>1&&c<k){
                x--;
                c++;
            }



        }



    }
    return 0;
}
