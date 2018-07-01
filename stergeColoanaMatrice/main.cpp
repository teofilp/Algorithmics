#include <iostream>

using namespace std;
int mat[1000][1000];
int main(){
	int n, m, k;
	cin>>n>>m>>k;
	

	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
		{
			cin>>mat[i][j];
			
		}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
			if(j == k-1)
				continue;
			else
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}
}