#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[]={2,4,6,10},n=4;
    int b[]={1,3,5,9,10,11},m=6;
    int c[10];
    int k=0;
    for(int i=0;i<n;i++){
        c[k]=a[i];
        k++;
    }
    for(int j=0;j<m;j++)
    {
        c[k]=b[j];
        k++;
    }
   /* for(int i=0;i<9;i++){
        for(int j=i+1;j<10;j++)
            if(c[i]>c[j])
        swap(c[i],c[j]);  }
        */
        sort(c,c+10);

    for(int i=0;i<10;i++)
        cout<<c[i]<<" ";



    return 0;
}
