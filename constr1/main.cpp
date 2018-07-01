#include <iostream>

using namespace std;
struct numar{
    int numar;
    int suma;

};
int main()
{
    int n;
    cin>>n;
    numar *v = new numar[n];
    for(int i=0; i<n; i++)
    {
        cin>>v[i].numar;

    }
    for(int i=0; i<n; i++){
            int s=0;
        for(int j=0; j<n; j++){
            if(j!=i){
                s+=v[j].numar;
            }
        }
        v[i].suma = s;
    }

    for(int i=0; i<n; i++)
        cout<<v[i].suma<<" ";

    return 0;
}
