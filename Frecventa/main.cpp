#include <iostream>

using namespace std;
int v[130];
int main()
{
    string s;
    bool ok = false;
    int maxi = -1;
    getline(cin ,s);
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a'&&s[i]<='z')
        v[int(s[i])]++;


    }

    for(int i = 122; i>=97; i--)
        if(maxi<=v[i])
        maxi=i;
    cout<<char(maxi);

    for(int i=0 ; i< 130; i++)
        cout<<v[i]<<" ";
    return 0;
}
