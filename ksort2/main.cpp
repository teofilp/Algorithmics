#include <iostream>
#include <vector>
using namespace std;
int v[200000];
void quicksort(int left, int right){
    int i = left;
    int j= right;
    int pivot = v[(left+right)/2];
        while(i<=j){

            while(v[i] < pivot)
                i++;
            while(v[j] > pivot)
                j--;
            if(i<=j){
                swap(v[i], v[j]);
                i++;
                j--;
            }
        }
        if(i < right)
            quicksort(i, right);
        if(j > left)
            quicksort(left, j);

}
int main()
{

    int n,k;
    cin>>n>>k;
    for(int i=0; i<n; i++)
        cin>>v[i];
    quicksort(0, k-1);
    quicksort(k, n-1);
    for(int i=0; i<k; i++)
        cout<<v[i]<<" ";
    for(int i=n-1; i>=k; i--)
        cout<<v[i]<<" ";



    return 0;
}
