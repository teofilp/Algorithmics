#include <iostream>
#include <strings.h>
using namespace std;
bool Vocala(char a){
    if(a=='a'|| a=='e'||a=='i'||a=='o'||a=='u')
        return true;
    else
        return false;

}
string st;
int c;
int main()
{
    getline(cin, st);
    for(int i=0 ;i <st.size()-1; i++)
        if(Vocala(st[i])&&Vocala(st[i+1]))
        c++;
    cout<<c;
    return 0;
}
