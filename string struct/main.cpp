#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct elev{

int varsta;
string nume;

};
int cp1(elev a, elev b){
    if(a.nume<b.nume)
        return 1;
    return 0;


}
int cp2(elev a, elev b){
    if(a.varsta<b.varsta)
        return 1;
    return 0;



}
int main()
{

    int n;
    cin>>n;
   elev copil[n];
   for(int i=0;i<n;i++)
    cin>>copil[i].nume>>copil[i].varsta;
    sort(copil,copil+n,cp2);
    for(int i=0;i<n;i++)
        cout<<copil[i].nume<<" "<<copil[i].varsta<<endl;

    return 0;
}
