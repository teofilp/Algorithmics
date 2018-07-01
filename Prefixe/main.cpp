#include <iostream>
#include <strings.h>
using namespace std;

int main()
{
    string st;
    cin>>st;
    for(int i=0; i<st.size(); i++){
        for(int j=0; j<st.size()-i; j++)
            cout<<st[j];
        cout<<endl;
    }
     for(int i=0; i<st.size(); i++){
        for(int j=i; j<st.size(); j++)
            cout<<st[j];
        cout<<endl;
    }
    return 0;
}
