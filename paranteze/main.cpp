#include <iostream>
#include <stack>
#include <strings.h>
using namespace std;
stack<char> s;
string st;

int main()
{
    s.push('a');
    cin>>st;
    for(int i=0;i<st.length();i++){
        if(s.top()=='('&&st[i]==')')
            s.pop();
        else
            s.push(st[i]);

    }
    if(s.top()=='a')
        cout<<"DA";
    else
        cout<<"NU";

    return 0;
}
