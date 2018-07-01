#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int prwef(int n,int m){
    return n>m;
}
int main()
{
    vector<int>v;
    v.push_back(3);
    v.insert(v.begin(),9);

   sort(v.begin(),v.end(),prwef);
     for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
    cout<<v.at(1);



    return 0;
}
