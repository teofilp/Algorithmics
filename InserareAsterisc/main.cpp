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

    int n;
    bool ok=false;
    string prop;
    getline(cin, prop);
    string propasterisc;

    for(int i=0; i<prop.size(); i++){
        if(Vocala(prop[i])){
            propasterisc.push_back(prop[i]);
            ok=true;
            propasterisc.push_back('*');
        }
        else
            propasterisc.push_back(prop[i]);
    }
    if(ok)
    cout<<propasterisc;
    else
        cout<<"FARA VOCALE";

    return 0;
}
