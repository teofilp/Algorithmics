#include <iostream>
#include <fstream>
#include <stack>
#include <strings.h>
using namespace std;

int main()
{
    ifstream read("paranteze1.in");
    ofstream write("paranteze1.out");
    int n;
    read>>n;

    for(int i=0; i<n; i++)
    {
        string s;
        stack<char>st;
        read>>s;
        st.push('a');
        for(int j=0; j<s.size(); j++){
            if(st.top() == '(' && s[j] == ')')
                st.pop();
            else
                st.push(s[j]);

        }
        if(st.top() == 'a')
            write<<1<<endl;
        else
            write<<0<<endl;
    }

    return 0;
}
