#include <iostream>
#include <strings.h>
#include <fstream>
using namespace std;
bool Vocala(char a){
    if(a=='a'|| a=='e'||a=='i'||a=='o'||a=='u')
        return true;
    else
        return false;

}
int vocMax=-1;
string MaxString;
int n,c;
int main()
{
    ifstream read("vocmax.in");
    ofstream write("vocmax.out");
    read>>n;
    for(int i=0; i<=n; i++){
        string st;
        getline(read, st);
        for(int j=0; j<st.size(); j++)
        {
            if(Vocala(st[j]))
                c++;
        }
        if(c>=vocMax)
        {
            vocMax = c;
            MaxString = st;

        }
        c=0;
    }
    write<<MaxString;
    return 0;
}
