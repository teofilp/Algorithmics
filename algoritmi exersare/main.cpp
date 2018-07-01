#include <iostream>

using namespace std;
void quicksort(int v[], int left, int right){
    int i=left;
    int j=right;
    int pivot = v[(left+right)/2];
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
        if(i<right)
            quicksort(v, i ,right);
        if(j>left)
            quicksort(v, left, j);
}
bool binar(int v[], int left, int right, int x){

    int m = (left + right)/2;
    if(left>right)
        return false;
    if(v[m]==x)
        return true;
    if(x>v[m])
        return binar(v, m+1, right, x);
    else
        return binar(v, left, m-1, x);
}
int main()
{
    int *v = new int[100];
    for(int i=0;i<=99;i++){
        v[i]=100-i;
    }
    quicksort(v,0 , 99);
    for(int i=0;i<100;i++)
        cout<<v[i]<<" ";
    cout<<binar(v, 0, 99 ,1001);
return 0;
}
