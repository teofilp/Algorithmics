#include <iostream>

using namespace std;
int S[100];
int v[100];
int m,n;
bool valid(int k);
bool solutie(int k);
void afisare(int k);
void BK(int k){
    for(int i=0; i<n; i++)
    {
        S[k] = i;
        if(valid(k))
            if(solutie(k))
            afisare(k);
        else
            BK(k+1);



    }
}
bool valid(int k){
    if(k==0)
        return true;
    else
        for(int i=0; i<k; i++)
        if(S[k-1]<S[k])
        if(v[S[k-1]]<v[S[k]])
        return true;
    return false;

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
    cin>>n;
    for(int i=0; i<n; i++)
    cin>>v[i];
    for(int i=1; i<=4; i++)
    {
        m=i;
        BK(0);
        cout<<endl;

    }

    return 0;
}
