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
        int x;
        k-=2;
        for(int i=3; k; i++)
        {
            k -= (i-1)*2;
            x = i;

        }
        cout<<x<<endl;

      /*  for(int i=1; i<2*x;i++)
            k++;
        cout<<k;
*/

    }
    return 0;
}
