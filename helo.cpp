#include <iostream>
#include <fstream>
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

	}


	if(i<right)
		quicksort(v, i ,right);
	if(j>left)
		quicksort(v, left, j);



}
int main(){
	ifstream read("helo.in");
	ofstream write("helo.out");
	int *v= new int[5];
	for(int i=0;i<10;i++)
		read>>v[i];
	quicksort(v,0, 9);
	for(int i=0; i<10 ;i ++)
		write<<v[i]<<" ";
	return 0;

}