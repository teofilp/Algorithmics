#include <iostream>
#include <fstream>
using namespace std;
bool v[1000000];
int main()
{
  ifstream read("numere5.in");
  ofstream write("numere5.out");
  int n,nr1=0,nr2=0;
  read>>n;
  for(int i=0;i<n*n;i++){
    int c;
    read>>c;
    if(c)
    v[c]=true;


  }
  for(int i=1;i<n*n&&nr1==0;i++){
    if(v[i]==false)
        nr1=i;
  }
  for(int i=n*n;i>=0&&nr2==0;i--)
  {
      if(v[i]==false)
        nr2=i;
  }

    write<<nr1<<" "<<nr2;
    return 0;
}
