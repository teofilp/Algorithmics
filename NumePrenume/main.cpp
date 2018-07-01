#include <iostream>
#include <strings.h>
using namespace std;
bool isVocala(char a){
    if(a=='a'||a=='A'
       ||a=='e'||a=='E'
       ||a=='i'||a=='I'
       ||a=='o'||a=='O'
       ||a=='u'||a=='U')
    return true;

    return false;
}
int main()
{
    string prenume, nume, rez;
    cin>>nume>>prenume;
    for(int i=0; i<prenume.size(); i++){
        if(!(isVocala(prenume[i])))
            rez.push_back(prenume[i]);
    }
    rez.push_back(' ');
    for(int i=0; i<nume.size(); i++)
        rez.push_back(nume[i]);

        cout<<rez;
    return 0;
}
