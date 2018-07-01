#include <iostream>
#include <string.h>
using namespace std;
int consoanai(char n){
    if(n=='a'||n=='e'||n=='o'||n=='u')
        return 1;
    else
        return 0;

}
int main()
{
    int ok=1;
    string n;
    getline(cin,n);
    for(int i=0;i<n.size();i++){
        if(consoanai(n[i])&&isalpha(n[i]))
        ok=0;
        if(n[i]=='i'&&n[i+1]=='i')
            ok=0;

    }

    if(ok)
        cout<<"DA";
    else
        cout<<"NU";


    return 0;
}
