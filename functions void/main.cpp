#include <iostream>

using namespace std;
void welcome();
bool corect(string x);
int main()
{
   string x;
   cin>>x;
   cout<<corect(x);

    return 0;
}
void welcome(){
cout<<"Welcome to my first program";

}
bool corect(string x){
if(x[0]=='0')
    return false;
for(int i=1;i<x.length();i++)
    if(!(x[i]>='0' && x[i]<='9'))
    return false;



    return true;

}
