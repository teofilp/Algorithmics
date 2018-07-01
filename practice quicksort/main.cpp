#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <algorithm>
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
            if(i<=j)
            {
                swap(v[i],v[j]);
                i++;
                j--;
            }
    }
    if(i<right)
        quicksort(v,i,right);
    if(j>left)
        quicksort(v,left,j);



}
int main()
{
        ifstream read("fisier.in");
        ofstream write("fisier.out");
       int n;
        read>>n;
        int *v=new int[n];
        for(int i=0;i<n;i++)
            read>>v[i];

        sort(v,v+n);
        for(int i=0;i<n;i++)
            write<<v[i]<<" ";


    return 0;
}
