#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n,c=0;
  cin>>n;
  for(int i=0;true;i++){
    for(int j=0;j<i;j++)
  { c++;
    if(c==n){
        cout<<i<<endl;
        return 0;
    }



  }

for(int j=1;j<=i;j++){
       c++;
       if(c==n){
          cout<<j<<endl;
          return 0;
       }

  }

  }


  return 0;
}
