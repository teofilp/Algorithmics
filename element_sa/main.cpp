#include <iostream>
#include <limits>
using namespace std;
int a[100][100];
int nr_sa(int a[100][100], int n, int m){
    if(n==0||j==0)
        return 0;
    int c=0, maxi=-99999999999, mini=99999999999;
    bool emax = true, emin = true;
    for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
            emax = true;
            emin = true;
            maxi = a[i][j];
            mini = maxi;
        for(int i1 = 0; i1<n; i1++){
            if(a[i1][j]>maxi)
                maxi = a[i1][j];
            if(a[i1][j]<mini)
                mini = a[i1][j];
        }


        for(int j1=0; j1<m; j1++){
            if(a[i][j1]<mini)
                mini = a[i][j1];
            if(a[i][j1]>maxi)
                maxi = a[i][j1];
        }
            if(maxi != a[i][j])
                emax = false;
            if(mini !=a[i][j])
                emin = false;
            if((emax == true && emin == false)||(emax == false && emin == true))
                c++;



    }
    }
    return c;

}
int main()
{
    int m,n;
    cin>>n>>m;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        cin>>a[i][j];
    cout<<nr_sa(a, n, m);
    return 0;
}
