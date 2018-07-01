#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream read("bancomat.in");
    ofstream write("bancomat.out");
    int S,n,c;
    read>>S>>n;
    for(int i=0;i<n;i++)
        {
            read>>c;
            if(c%10==2){
                c/=10;
                S+=c;
            }
            else
            {
                c/=10;
                S-=c;
            }
        }
    write<<S;

    return 0;
}
