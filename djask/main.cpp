#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <ctime>
using namespace std;
void quicksort(int v[], int left, int right){

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


        if(i<right)
            quicksort(v,i,right);
        if(j>left)
            quicksort(v,left,j);



    }


}
int main()
{
    int n;  cin>>n;
    int v[n];
    for(int i=0;i<n;i++)
        v[i]=n-i;
    double t=clock();
  quicksort(v,0,n-1);
/*
   sort(v,v+10000);
*/
    t=clock()-t;
    cout<<"quicksort : "<<t<<endl;
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";

    return 0;
}
