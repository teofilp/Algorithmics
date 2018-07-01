#include <iostream>
#include <fstream>
#include <stack>
using namespace std;

int main()
{
    ifstream read("paranteze3.in");
    ofstream write("paranteze3.out");
    int n;
    read>>n;
    string st;
    for(int i=0; i<n; i++){

        read>>st;
       stack<char> s;
        s.push('a');
        for(int j=0; j<st.length(); j++){
            if((s.top()=='('&&st[j]==')')||(s.top()=='['&&st[j]==']'))
               s.pop();
               else
                s.push(st[j]);
        }

        if(s.top()=='a')
            write<<"1"<<endl;
        else
            write<<"0"<<endl;


    }
    return 0;
}
