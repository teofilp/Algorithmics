#include <iostream>

using namespace std;
void quickSort(int arr[], int left, int right) {
����� int i = left, j = right;
����� int tmp;
����� int pivot = arr[(left + right) / 2];
�
����� /* partition */
����� while (i <= j) {
����������� while (arr[i] < pivot)
����������������� i++;
����������� while (arr[j] > pivot)
����������������� j--;
����������� if (i <= j) {
����������������� tmp = arr[i];
����������������� arr[i] = arr[j];
����������������� arr[j] = tmp;
����������������� i++;
����������������� j--;
����������� }
����� };
�
����� /* recursion */
����� if (left < j)
����������� quickSort(arr, left, j);
����� if (i < right)
����������� quickSort(arr, i, right);
}



int main()
{
    int n,left=0,right;
    cin>>n;
    int v[n];
    right=n-1;
    for(int i=0;i<n;i++)
        cin>>v[i];
    quickSort(int v[],int left,int right)
    for(int i=0;i<n;i++
    cout<<v[i]<<" ";
     return 0;
}
