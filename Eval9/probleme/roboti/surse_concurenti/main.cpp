#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;
struct nr{
	int val;
	int max;
};
void quicksort(int v[], int left, int right){
	int i = left;
	int j = right;
	int pivot = v[(left+right)/2];
	while(i<=j){
		while(v[i]<pivot)
			i++;
		while(v[j]>pivot)
			j--;
		if(i<=j)
		{
			swap(v[i],v[j]);
			i++;j--;
		}

	}
	if(i<right)
		quicksort(v, i, right);
	if(j>left)
		quicksort(v, left, j);
}
int n, p;
int *v;
nr *w;
int maxi = 1;
int main(){
	ifstream read("roboti.in");
	ofstream write("roboti.out");
	read>>p>>n;
	v = new int[n];
	if(p == 1){
	w = new nr[2*n];
	for(int i=0; i<2*n; i++)
		w[i].max = 1;
	for(int i=0; i<n; i++)
	{
		read>>v[i];
		w[i].val = v[i];
	}
	for(int i=n; i<=2*n-1; i++)
		w[i].val = w[i-n].val;
	// for(int i=0; i<2*n; i++)
	// 	cout<<w[i].val<<" ";
	for(int i=1; i<2*n; i++)
		if(w[i-1].val < w[i].val){
			w[i].max+=w[i-1].max;
			if(maxi < w[i].max)
				maxi = w[i].max;
		}

		write<<maxi;
	}
	else{

		for(int i=0; i<n; i++)
			read>>v[i];
	quicksort(v, 0, n-1);
	vector<int> aranjat;

	for(int i=0; i<n; i+=2)
		aranjat.push_back(v[i]);
	for(int i=0; i<n; i++)
		cout<<v[i]<<" " ;
	cout<<endl;

	if(n%2==1){
		for(int i=n-2; i>=0; i-=2)
			aranjat.push_back(v[i]);
	}
	else
		for(int i=n-1; i>=0; i-=2)
			aranjat.push_back(v[i]);
	for(int i=0; i<n; i++)
		write<<aranjat[i]<<" ";
	}
	return 0;
}