#include <iostream>

using namespace std;
struct copil{
    double h;
    int index;
};
copil v[1005];
void quicksort(int left, int right){
    int i = left;
    int j= right;
    int pivot = v[(left+right)/2].h;
        while(i<=j){

            while(v[i].h < pivot)
                i++;
            while(v[j].h > pivot)
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
    int n;
    cin>>n;
    for(int i=1; i <= n; i++){
        cin>>v[i].h;
        v[i].index = i;

    }
    quicksort(1, n);
    for(int i=1; i <= n; i++)
        cout<<v[i].index<<" ";


    return 0;
}
