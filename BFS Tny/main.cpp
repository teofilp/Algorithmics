//drum minim in matrice pe orizontala si verticala

#include <iostream>
#include <fstream>
using namespace std;
int M[100][100],V[100][100],l1,c1,l2,c2,n,m;
void parcurge(int n,int m,int M[100][100],int V[100][100],int l1,int c1,int x)
{
	if(l1>=0 && l1<n && c1>=0 && c1<m)
	if(M[l1][c1]==0)
	{
		V[l1][c1]=x;
		if(l1>0 && M[l1-1][c1]==0 && V[l1-1][c1]==n*m+1)
			V[l1-1][c1]=x+1;
		if(c1<m-1 && M[l1][c1+1]==0 && V[l1][c1+1]==n*m+1)
			V[l1][c1+1]=x+1;
		if(l1<n-1 && M[l1+1][c1]==0 && V[l1+1][c1]==n*m+1)
			V[l1+1][c1]=x+1;
		if(c1>0 && M[l1][c1-1]==0 && V[l1][c1-1]==n*m+1)
			V[l1][c1-1]=x+1;
			
			
			
		if(l1>0 && M[l1-1][c1]==0 && V[l1-1][c1]==x+1)
			parcurge(n,m,M,V,l1-1,c1,x+1);
		if(c1<m-1 && M[l1][c1+1]==0 && V[l1][c1+1]==x+1 )
			parcurge(n,m,M,V,l1,c1+1,x+1);
		if(c1>0 && M[l1][c1-1]==0 && V[l1+1][c1]==x+1)
			parcurge(n,m,M,V,l1+1,c1,x+1);
		if(c1>0 && M[l1][c1-1]==0 && V[l1][c1-1]==x+1 )
			parcurge(n,m,M,V,l1,c1-1,x+1);
	}
}
int main() {
	ifstream read("txt.in");

	read>>n>>m;
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
		read>>M[i][j];
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
		V[i][j]=n*m+1;
	read>>l1>>c1;
	read>>l2>>c2;
          	///V[l1][c1]=0;
          	parcurge(n,m,M,V,l1,c1,1);
          	cout<<"matricea produsa este"<<endl;
          	for(int i=0;i<n;i++)
          	{
          		for(int j=0;j<m;j++)
          			cout<<V[i][j]<<' ';
          		cout<<endl;
          	}
          	if(V[l2][c2]<n*n+1)
          		cout<<V[l2][c2];
          	else
          		cout<<"imposibil";
  return 0;
}






