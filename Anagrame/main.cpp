#include <iostream>
#include <fstream>
using namespace std;
int v[30];
bool ok=true;
int main()
{
    string st1, st2;
    cin>>st1>>st2;
    if(st1.size()!=st2.size()){
            cout<<0;
    }

    else{
        for(int i=0 ; i<st1.size(); i++){
            v[int(st1[i])-61]++;
            v[int(st2[i])-61]++;

        }
        for(int i=0 ;i<=26; i++ )
            if(v[i]%2)
            ok=false;
   cout<<ok;
    }

    return 0;
}
