#include <iostream>
#include <fstream>
using namespace std;
long long int v[4000000];
int n,k;
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
    ifstream read("statisticiordine.in");
    ofstream write("statisticiordine.out");
    read>>n>>k;
    for(int i=0; i<n; i++)
        read>>v[i];
    quicksort(0, n-1);
    write<<v[k-1];
    return 0;
}
