#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> minime;
int v[102][102];
void minim(int i, int j){
    if(v[i][j]<v[i+1][j]&&
       v[i][j]<v[i+1][j]&&
       v[i][j]<v[i][j-1]&&
       v[i][j]<v[i-1][j]&&
       v[i][j]<v[i+1][j+1]&&
       v[i][j]<v[i-1][j-1]&&
       v[i][j]<v[i-1][j+1]&&
       v[i][j]<v[i+1][j-1])
        minime.push_back(v[i][j]);
        if(v[i][j]>v[i+1][j])
            minim(i+1,j);
        if(v[i][j]>v[i][j+1])
            minim(i,j+1);
        if(v[i][j]>v[i][j-1])
            minim(i,j-1);
        if(v[i][j]>v[i-1][j])
            minim(i-1,j);
        if(v[i][j]>v[i+1][j+1])
            minim(i+1,j+1);
        if(v[i][j]>v[i-1][j-1])
            minim(i-1,j-1);
        if(v[i][j]>v[i-1][j+1])
            minim(i-1,j+1);
        if(v[i][j]>v[i+1][j-1])
            minim(i+1,j-1);

}
int main()
{
    ifstream read("schior.in");
    ofstream write("schior.out");
    int m,n,l,c;
    read>>m>>n>>l>>c;
    for(int i=0;i<102;i++)
        for(int j=0;j<102;j++)
        v[i][j]=10000;
    for(int i=1;i<m+1;i++)
        for(int j=1;j<n+1;j++)
        read>>v[i][j];
    minim(l,c);
    sort(minime.begin(), minime.end());
   vector<int>::iterator it=minime.begin();
    write<<minime[0];

    return 0;
}
