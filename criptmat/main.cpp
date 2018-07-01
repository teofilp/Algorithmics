#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream read("criptmat.in");
    ofstream write("criptmat.out");
    int n,k=0;
    read>>n;
    string st;
    while(read>>st)
        read>>st;
    int m=st.size()/n;
    char mat[m][n];
    for(int i=0;i<m;i++){
            if(i%2==0)
                for(int j=0;j<n;j++)
    {
        mat[i][j]=st[k];
        k++;
    }
            else
                      for(int j=n-1;j>=0;j--)
    {
        mat[i][j]=st[k];
        k++;
    }
    }

   for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        write<<mat[j][i];


    return 0;
}
