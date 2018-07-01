#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;
int v[1000000];
int ciur(int n){
    int c=1;
    v[0]=v[1]=1;
      
    for(int i=3;i<n;i+=2){

        if(v[i]==0){
          
             c++;
             for(int j=3*i;j<n;j+=2*i)
             v[j]=1;
        }
       
    }

   

    return c;
}
void quicksort(int v[], int left, int right){
    int i=left;
    int j=right;
    int pivot=v[(left+right)/2];
        while(i<=j){
            while(v[i]<pivot)
                i++;
            while(pivot<v[j])
                j--;
            if(i<=j){
                swap(v[i],v[j]);
                i++;
                j--;
            }

        }
    if(i<right)
    quicksort(v, i, right);
    if(j>left)
    quicksort(v, left, j);


}
int main(){
   int *v= new int[100000000];
   int *w= new int[100000000];
   for(int i=0;i<100000000;i++){
     v[i]=100000000-i;
     w[i]=100000000-i;
   }
   time_t quick = clock();
   quicksort(v, 0 , 99999999);
   quick = clock() - quick;

   time_t sorti = clock();
   sort(w, w+99999999);
   sorti = clock() - sorti;

   cout<<"quicksort time was: "<<quick/(double)CLOCKS_PER_SEC<<"sec"<<endl;
    cout<<"sort time was: "<<sorti/(double)CLOCKS_PER_SEC<<"sec"<<endl;

}