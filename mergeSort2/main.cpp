#include <iostream>

using namespace std;

void merge(int v[], int p, int q, int r){
	int i,j,k;
	int n1 = q-p+1;
	int n2 = r-q;

	int *left = new int[n1];
	int *right = new int[n2];

	for(i=0; i<n1; i++)
		left[i] = v[p+i];
	for(j=0; j<n2; j++)
		right[j] = v[q+1+j];
	i=0;
	j=0;
	k=p;

	while(i<n1 && j<n2){
		if(left[i]<=right[j]){
			v[k++] = left[i++];
		}
		else{
			v[k++] = right[j++];
		}
	}
	while(i<n1){
		v[k++] = left[i++];
	}
	while(j<n2){
		v[k++] = right[j++];
	}

}
void mergeSort(int v[], int p, int r){
	if(p<r){
		int q = (p+r)/2;
	mergeSort(v, p, q);
	mergeSort(v, q+1, r);
	merge(v, p, q, r);
	}
	


}

int main(){


	int v[] = {2, 4, 5, 7, 1, 2, 3};
	for(int i=0; i<7; i++)
		cout<<v[i]<<" ";
	cout<<endl;
	mergeSort(v, 0, 7);
	for(int i=0; i<7; i++)
		cout<<v[i]<<" ";

	return 0;
}