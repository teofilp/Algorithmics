#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;




int main(){

	int m,n;

	cin>>m>>n;
	int lungime = 2*m + 2*n - 4;
	int vector[lungime];
	int poz=0;
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++){
			int x;
			cin>>x;
			if(i==0 || i==m-1){ // daca e pe prima linie sau pe ultima 
				vector[poz] = x; // pastrez in sirul vector numarul
				poz++;			// incrementez pozitia actuala pentru a fi pregatita pentru urmatoarea inserare in vector
			}
			else if(j==0 || j==n-1){ // daca e pe prima coloana sau pe ultima dar nu si pe colturi
				if(i!=0 && i!=m-1) 
				vector[poz] = x;
				poz++;
			}
		
}

	for(int i=0; i<lungime-1; i++)
		for(int j=i+1; j<lungime; j++)
			if(vector[i] > vector[j])		// sortezz crescator vectorul
				swap(vector[i], vector[j]);

	cout<<vector[0]<<" ";	// afisez prima valoare 
	for(int i=1; i<lungime ; i++)
		if(vector[i]!=vector[i-1])	// verific daca numarul anterior este diferit pentru a elimina dublurile
			cout<<vector[i]<<" ";
	return 0;
}