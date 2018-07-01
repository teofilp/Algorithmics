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
    bool ok=1;
    int pozV=-1, pozC=-1;
    string st;
    cin>>st;
    for(int i=0; i<st.size(); i++){
        if(isalpha(st[i])&&(isVocala(st[i]))&&ok)
        {
            pozV = i;
            ok = 0;
        }
        if(isalpha(st[i])&&(!(isVocala(st[i]))))
            pozC = i;
    }
    if(pozV!=-1&&pozC!=-1){
        swap(st[pozV],st[pozC]);
        cout<<st;

    }
    else
        cout<<"IMPOSIBIL";


    return 0;
}
