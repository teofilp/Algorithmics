#include <iostream>
#include <strings.h>
using namespace std;
bool Vocala(char a){
    if(a=='a'|| a=='e'||a=='i'||a=='o'||a=='u')
        return true;
    else
        return false;

}
int main()
{
    string st;
    getline(cin, st);
    string rez;
    for(int i = st.size()-1; i>=0; i--)
        if(!Vocala(st[i]))
        rez.push_back(st[i]);
    for(int i = rez.size()-1; i >= 0 ;i--)
        cout<<rez[i];
    return 0;
}
