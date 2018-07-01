#include <iostream>
#include <fstream>
using namespace std;
struct produs{
    string n;
    int c;
    int p;
};
produs v[6];
int main()
{

    cout<<"Alegeti ce doriti sa accesati:"<<endl;
    cout<<"1 mere"<<endl<<"2 pere"<<endl<<"3 struguri"<<endl<<"4 caise"<<endl<<"5 prune"
    <<endl<<"6 ananas";
    v[0].n='mere';
    v[1].n='pere';
    v[2].n='struguri';
    v[3].n='caise';
    v[4].n='prune';
    v[5].n='ananas';
    int n,nr,d;
    cin>>n;
    while(n<=6&&n>0){
        if(n==1){


            cout<<"1 vizualizati stocul"<<endl<<"2 adaugati cantitate"<<endl<<"3 inapoi"<<endl;
            cin>>nr;
            if(nr==1)
            {


            }
            if(nr==2){
                    cin>>d;
            v[0].c+=d;
            cout<<"cantitatea de"<<v[0].n<<" a crescut cu "<<d<<" unitati"<<endl;


            }
            if(nr==3)
                continue;
        }

    }

    return 0;
}
