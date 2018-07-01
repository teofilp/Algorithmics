#include <iostream>
#include <fstream>
using namespace std;
ifstream read("spirala.in");
ofstream write("spirala.out");
   int m,n;
   int **v;
int main()
{

   cin>>m>>n;
   int** v= new int*[m];    ///!!!!
   for(int i=0;i<m;i++)     ///!!!!
    v[i]= new int [n];      ///!!!!

   for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
        cin>>v[i][j];
   int parc= (max(m,n))/2;
   if(m==n&&m%2)
    parc++;
   for(int p=0;p<parc;p++){

      int i=p;
      int j=p;


        for( j=p;j<n-p-1;j++)
            cout<<v[i][j]<<" ";
        for(;i<m-p;i++)
            cout<<v[i][j]<<" ";
        i--;
        for( j=n-p-2;j>p;j--)
            cout<<v[i][j]<<" ";

        for( ;i>p;i--)
            cout<<v[i][j]<<" ";



   }

    return 0;
}
