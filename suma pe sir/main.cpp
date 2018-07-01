#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,c,s=0;
    vector <int> suma;
    cin>>n>>c;
    for(int i=0;i<n;i++)
    {
        int c;
        cin>>c;
        suma.push_back(c);

    }
    for(int i=0;i<c;i++)
   for(vector<int>::iterator it=suma.begin();it!=suma.end()-1-i;it++)
        *it=*it+*(it+1);/// *it =v[i] it=  i;
    for(vector<int>::iterator it=suma.begin();it!=suma.end()-c;it++)
            s+=*it;

   cout<<s;
       return 0;
}
