#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;
void quicksort(int v[],int left, int right){
    int i=left;
    int j=right;
    int pivot=v[(left+right)/2];

    while(i<=j){
        while(v[i]<pivot)
            i++;
        while(v[j]>pivot)
            j--;
        if(i<=j){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    if(left<j)
        quicksort(v,left,j);
    if(i<right)
        quicksort(v,i,right);


}
int main()
{   int *v=new int [10000000];

    for(int i=0; i<10000000; i++)
        v[i]=rand()%10000000;
        sort(v,v+10000000);
   /* quicksort(v,0,9999999);

    for(int i=0; i<99999; i++)
        for(int j=i+1; j<100000; j++)
            if(v[i]>v[j])
            swap(v[i],v[j]);

    for(int i=0;i<10000000;i++)
        cout<<v[i]<<" ";
 */
    return 0;
}
