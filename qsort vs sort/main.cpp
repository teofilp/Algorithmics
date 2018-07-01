#include <iostream>
#include <ctime>
#include <vector>
#include <stdlib.h>
#include <algorithm>
using namespace std;
    void qsort(int v[], int left, int right){
        int i = left;
        int j = right;
        int pivot = v[(left+right)/2];
                while(i <= j){
                        while(v[i] < pivot)
                            i++;
                        while(v[j] > pivot)
                            j--;

                        if(i <= j){
                            swap(v[i], v[j]);
                            i++;
                            j--;


                        }


                }

            if(i<right)
                qsort(v, i , right);
            if(j>left)
                qsort(v, left, j);



               }
int main()
{
    clock_t qsort_time;
    clock_t sort_time;

    vector<int> v1;

    for(int i = 0; i < 100000000 ; i++)
        v1.push_back( rand() );

    int  t = v1.size();
    int *v = new int[t];
        for(int i = 0; i < t; i++)
            v[i] = v1[i];

    sort_time = clock();

    sort(v1.begin(), v1.end());

    sort_time = clock() - sort_time;

    qsort_time = clock();

    qsort(v,0 ,t);

    qsort_time = clock() - qsort_time;

    cout<<"sort time was : "<<sort_time<<endl;
    cout<<"qsort time was: "<<qsort_time<<endl;



    return 0;
}
