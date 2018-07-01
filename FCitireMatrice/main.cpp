#include <iostream>

using namespace std;
void citmat(int a[100][100],int n, int m){
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        cin>>a[i][j];

}
int main()
{
    int a[100][100];
    int m = 3;
    int n = 2;
    citmat(a, n, m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
