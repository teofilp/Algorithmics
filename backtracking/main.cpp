#include <iostream>

using namespace std;
int const maxi=20;
int n, v[maxi];
int valid(int k);
int solutie(int k);
void afisare (int k);
void BK(int k);
int main()
{
    cin>>n;
    BK(1);
    return 0;
}
void BK(int k ){
    int i;

for(int i=0;i<n;i++)
{
    v[k]=i;
    if(valid(k)){
         if(solutie(k)){
            afisare(k);
         }
    else
        BK(k+1);
         }

    }

}




int valid(int k){
    int i;

for(int i=0;i<=k;i++)
    if(v[i]==v[k])
        return 0;

    return 1;


}

int solutie(int k){
    if(k==n)
        return 1;
        else
            return 0;

}
void afisare(int k){

    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";

    cout<<endl;
}
