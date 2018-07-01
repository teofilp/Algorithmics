#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
struct ob{
    int poz;
    int numar;

};
ob nm[100];
 string parola,parola2;
 int n;


int cp(ob a, ob b){
    if(a.numar<b.numar)
        return 1;
    return 0;



}
int cp2(ob a, ob b){
    if( a.poz <  b.poz)
        return 1;
    return 0;


}
void introducere(string &parola){

    cin>>parola;


}

void incriptare( string &parola, ob nm[],int &n){

      n=parola.size();



    for(int i=0;i<n;i+=1){

          nm[i].numar=int(parola[i])-4;
          nm[i].poz=i;


    }
    sort(nm,nm+n,cp);
}
void decriptare(ob nm[],string &parola2){

     sort(nm, nm+n, cp2);
     parola2="";
    for(int i=0;i<n;i++)
       parola2+=char(nm[i].numar+4);


       cout<<parola2;


}
int main()
{


    introducere(parola);
    incriptare(parola, nm, n);
    for(int i=0;i<n;i++)
        cout<<char(nm[i].numar);
    cout<<endl;
    decriptare(nm, parola2);






    return 0;
}
