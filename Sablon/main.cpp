#include <iostream>

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
    string s, x, rez;
    cin>>s>>x;
    for(int i=0; i< s.size(); i++){
        if(isVocala(s[i])==1&&isVocala(x[i])==1)
            rez.push_back('*');
            else
        if(!(isVocala(s[i]))==1&&!(isVocala(x[i]))==1)
            rez.push_back('#');
        else
            rez.push_back('?');
    }
    cout<<rez;
    return 0;
}
