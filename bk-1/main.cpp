#include <iostream>

using namespace std;
int n,c;
int S[1000];
void BK(int k);
bool valid(int k);
bool solutie(int k);
void afisare(int k);
void BK(int k){
    for(int i=1; i<=n; i++){
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
        if(S[i] == S[k])
        return false;
    return true;

}
bool solutie(int k){
        if(k==n)
        {
            c++;
            return true;

        }

        return false;

}
void afisare(int k){
    for(int i=1; i<=k; i++)
        cout<<S[i]<<" ";
    cout<<endl;
}
int main()
{
    n = 4;
    BK(1);
    cout<<c;
    return 0;
}
