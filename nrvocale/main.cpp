#include <iostream>

using namespace std;

int vocala(char c){
    if(c=='a'||c=='e'||c=='i'||c=='0'||c=='u')
        return 1;

    else
        return 0;

}

int main()
{
    int ca=0,ce=0,ci=0,co=0,cu=0,maxi=-1;
     string n;
    getline(cin,n);
    for(int i=0;i<n.size();i++)
    {
        if(n[i]=='a'||n[i]=='A')
            ca++;
        if(n[i]=='e'||n[i]=='E')
            ce++;
        if(n[i]=='i'||n[i]=='I')
            ci++;
        if(n[i]=='o'||n[i]=='O')
            co++;
       if(n[i]=='u'||n[i]=='U')
            cu++;


    }
    if(ca>maxi)
        maxi=ca;
    if(ce>maxi)
        maxi=ce;
    if(ci>maxi)
        maxi=ci;
    if(co>maxi)
        maxi=co;
    if(cu>maxi)
        maxi=cu;

    if(maxi==ca){
        cout<<'A';
        return 0;
    }

    if(maxi==ce){
         cout<<'E';
         return 0;
    }

    if(maxi==ci)
    {
         cout<<'I';
         return 0;

    }

    if(maxi==co){
          cout<<'O';
          return 0;
    }

    if(maxi==cu){
        cout<<'U';
        return 0;
    }









    return 0;
}
