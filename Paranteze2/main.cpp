#include <iostream>
#include <stack>
#include <strings.h>
#include <fstream>
using namespace std;

int main()
{
    ifstream read("paranteze2.in");
    ofstream write("paranteze2.out");
    string s;
    stack<char>st;
    read>>s;
    int c=0,cmax=0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '(')
            c++;
        else if(c>cmax){
            cmax=c;
            c=0;
        }
        else
            c=0;


    }
    write<<cmax;
    return 0;
}
