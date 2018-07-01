#include <iostream>

using namespace std;
int S[100], v[100];
int n;
bool valid(int k);
bool solutie(int k);
void afisare(int k);
void BK(int k){

    for(int i=0; i<n;i++){
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
        if(S[k]==S[i])
        return false;
    return true;


}
bool solutie(int k){
    if(k==n-1)
        return true;
    else
        return false;

}
void afisare(int k){
    for(int i=0; i<=k; i++)
        cout<<v[S[i]]<<" ";
    cout<<endl;
}
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
        v[i] = i+1;
    BK(0);
    return 0;
}
