#include <iostream>
#include <fstream>
#include <queue>
using namespace std;
ifstream read("panda.in");
ofstream write("panda.out");
struct teren{
    int cod;
    bool mancare;
    int viz;
 
};
queue<pair<int, int> > Q;
int dl[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};
teren v[500][500];
int n,m, L, C, k;
short S;
int t;
int contor;
int p;
int main()
{
    
    read>>p;
    int masca = 0;
    read>>n>>m>>t;
    read>>L>>C>>k>>S;
    if(p == 1){
    for(int i=0; i<S; i++)
        masca = (masca<<1)+1;
    for(int i=0; i<t; i++){
        int x,y;
        read>>x>>y;
        x--;
        y--;
        v[x][y].mancare = true;
 
    }
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        read>>v[i][j].cod;
 
    k = masca & k;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++){
            if(!(L == i+1 && C == j+1)){
            v[i][j].cod = v[i][j].cod & masca;
            if(k ^ v[i][j].cod == masca)
                contor++;
            }
        }
    write<<contor;
 
    }
    else{
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                v[i][j].viz = -1;
        Q.push({L,C});
        v[L][C].viz = 0;
        while(Q.empty() == false){
            pair<int, int> aux;
            aux = Q.front();
            Q.pop();
            int lnou, cnou;
            for(int dir = 0; dir<4; dir++){
                lnou = aux.first+dl[dir];
                cnou = aux.second+dc[dir];
                if(lnou>=0 && lnou<=n-1 && cnou>=0 && cnou<=m-1){
                    v[lnou][cnou].viz = v[aux.first][aux.second].viz+1;
                    Q.push({lnou, cnou});
                }
            }
        }
        unsigned int min = ~0;
        int nrmin = 1;
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++){
                if(v[i][j].mancare)
                    if(v[i][j].viz>=0){
                        if(v[i][j].viz < min){
                            min = v[i][j].viz;
                            nrmin=1;
                        }
                        else{
                            if(v[i][j].viz == min)
                                nrmin++;
                        }
                    }
            }
        write<<min<<" "<<nrmin;


    }
    read.close();
    write.close();
        
    return 0;
}