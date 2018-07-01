#include <iostream>
#include <fstream>
#include <cmath>
#include <limits>
using namespace std;
int mat[202][202];
int cost[202][202];
int main(){

	ifstream read("taxe.in");
	ofstream write("taxe.out");
	int n,m;
	read>>n>>m;
	for(int i=0; i<=n+1; i++)
		for(int j=0; j<=m+1; j++)
			cost[i][j] = 9999999;
	for(int i=1; i<=n; i++)
		for(int j=1; j<=m; j++){
			read>>mat[i][j];
			if(j == m){
				cost[i][j] = mat[i][j];
			}
			else
				cost[i][j] = 0;
		}

	
	for(int j=m-1; j>=1; j--)
		for(int i=1; i<=n; i++){
			cost[i][j] = min(min(cost[i][j+1], cost[i+1][j+1]),
			cost[i-1][j+1]) + mat[i][j];
		}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++)
			cout<<cost[i][j]<<" ";
		cout<<endl;
	}
	int mini = 99999999999;
	for(int i=1; i<=n; i++)
		if(cost[i][1] < mini)
			mini = cost[i][1];
	write<<mini;
	return 0;
}
