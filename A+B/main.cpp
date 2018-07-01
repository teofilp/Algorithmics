#include <fstream>
#include <iostream>
using namespace std;

ifstream read("secv2.in");
ofstream write("secv2.out");
int n, k;
int v[50000];
int smax=-1;
int smin, maxd,nr=0;
int s=0;
int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int j=1;j<k;j++){
        for(int i=0;i<n-k+1;i++){
                s=0;
             for(int dr=i; dr<=i+j;dr++){
                 s+=v[dr];
                 nr++;
            }

            if(s>smax){
                smin=j;
                maxd= nr-smin;

            }
        }

    }

cout<<smax;


return 0;
}
