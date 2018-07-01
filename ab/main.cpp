#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
        ifstream read("ab.in");
        ofstream write("ab.out");
   int ca,cb,c=0;
   string ab;
   while(read>>ab)
    read>>ab;
    for(int k=2;k<ab.size();k+=2){
            ca=0;
            cb=0;
        for(int i=0;i<ab.size();i++)
    {   for(int j=i;j<k-1;j++)
        if(ab[j]=='a')
            ca++;
            else
                cb++;
    }
    if(ca==cb)
        c++;
    }
    write<<c;
    return 0;
}
