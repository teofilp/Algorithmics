#include <iostream>

using namespace std;
int S[100];
int v[100];
int m,n;
bool valid(int k);
bool solutie (int k);
void afisare(int k);
void BK(int k){
    for(int i=0; i<n; i++){
        S[k] = i;
        if(valid(k))
            if(solutie(k))
                afisare(k);
        else
            BK(k+1);




    }

}
bool valid(int k){
    for(int i=0; i<k; i++)
        if(S[k] == S[i])
        return false;
    return true;

}
bool solutie(int k){
    if(k==m-1)
        return true;
    return false;

}
void afisare(int k){
    for(int i=0; i<=k; i++)
        cout<<v[S[i]]<<" ";
        cout<<endl;

}
int main()
{
    cin>>n>>m;
    for(int i=0; i<n; i++)
        cin>>v[i];

    BK(0);
    return 0;
}
