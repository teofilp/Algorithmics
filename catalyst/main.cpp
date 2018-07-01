#include <fstream>
#include <iostream>
#include <limits>
using namespace std;

int nr, timp, n,m, maxi = INT_MIN;
int front[10000][10000];
int back[10000][10000];
int main(){

	ifstream read("txt.in");
	ofstream write("txt.out");
	read>>nr;
	for(int k=0; k<nr; k++){		
		read>>timp>>n>>m;	// citesc prima poza
		if(k%2==0)
			write<<timp<<" ";
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++)
				read>>front[i][j];
		}
		read>>timp>>n>>m;
		for(int i=0; i<n; i++)	// citesc a doua poza
			for(int j=0; j<m; j++)
				read>>back[i][j];

		for(int i=0; i<n; i++)  // stiind ca exista cel putin un cub care sa se vada pe ambele
										// parti aflam distanta maxima de la cub la fiecare plan fotografiat
			for(int j=0; j<m; j++){
				int dist = back[i][m-j-1] + front[i][j];
				if(dist > maxi ){
					maxi = dist;
				}


			}
		maxi++; // latimea asteroidului o sa fie maxim + 1 (latimea celulei cu distanta max)
		int s=0;
		for(int i=0; i<n; i++)
			for(int j=0; j<m; j++){
				if(front[i][j]){
					s+=maxi - (front[i][j] + back[i][m-j-1]);
					// adunam diferentele de latime
				}
				
			}
		if(k%2==0){
			write<<s;
			maxi = INT_MIN;

		}
	}




	return 0;
}