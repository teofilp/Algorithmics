#include <iostream>
#include <fstream>

using namespace std;

unsigned long mat[5][5], aux[5][5];

void cpy(unsigned long v[5][5], unsigned long w[5][5]){
	for(int i=0; i<5; i++)
		for(int j=0; j<5; j++)
			v[i][j] = w[i][j];
}
void inmultire(unsigned long v[5][5],unsigned long w[5][5]){
	unsigned long c[5][5];
	for(int i=0; i<5; i++)
		for(int j=0; j<5; j++)
			c[i][j] = 0;
	for(int i=0; i<5; i++)
		for(int j=0; j<5; j++)
			for(int k=0; k<5; k++)
				c[i][j]+= v[i][k]*w[k][j];

			cpy(v, c);

			
	
}
void putereExp(int n){
	while(n>0){
		if(n%2 == 1){
			inmultire(aux, mat);
			n--;
		}
		inmultire(mat, mat);
		n/=2;
	}
	
}

int main(){
	mat[0][1] = mat[1][0] = mat[1][2] = mat[2][1] = mat[2][3] = mat[3][2] = 
	mat[3][4] = mat[4][3] = 1;
	cpy(aux, mat);
	// 	// putereExp(5);
	// putereExp(4);
	unsigned long int s=0;
	// for(int i=0; i<5; i++)
	// 	for(int j=0; j<5; j++)
	// 		s+=aux[i][j];
	// 	cout<<s;
	// 	cout<<endl;
	// for(int i=0; i<5; i++)
	// {
	// 	for(int j=0; j<5; j++)
	// 		cout<<aux[i][j]<<" ";
	// 	cout<<endl;
	// }
	for(int i=0; i<4; i++)
		inmultire(aux, mat);	

	for(int i=0; i<5; i++)
		for(int j=0; j<5; j++)
			s+=aux[i][j];
	cout<<s;

	return 0;
}