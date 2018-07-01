#include <iostream>
#include <strings.h>
using namespace std;
string rez;
int cuv, lit;
int main()
{


    cin>>rez;
    for(int i=0;i<=rez.size();i++){


        if((int(rez[i])>64&&int(rez[i])<91)||(int(rez[i])>96&&int(rez[i])<123))
            lit++;
        if(!((int(rez[i])>64&&int(rez[i])<91)||(int(rez[i])>96&&int(rez[i])<123))
           &&((int(rez[i-1])>64&&int(rez[i-1])<91)||(int(rez[i-1])>96&&int(rez[i-1])<123))
           &&((int(rez[i+1])>64&&int(rez[i+1])<91)||(int(rez[i+1])>96&&int(rez[i+1])<123))&&rez[i]!='-')
            cuv++;

    }
    cout<<lit/cuv;
    return 0;
}
