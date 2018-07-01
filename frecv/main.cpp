#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ///6.	Se citesc cifre separate cu spatii. Sa se elimine secventele de cifre egale aflate pe pozitii consecutive.
    ///     Se repeta procedeul pana cand nu mai exista astfel de secvente.
    vector <short> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int c;
        cin>>c;
        v.push_back(c);

    }
    for(int it=0;it<v.size();it++){
        if(v[it]==v[it+1])
            v.erase(v.begin()+it);
    }
    for(int it=0;it<v.size();it++)
        cout<<v[it]<<" ";

    return 0;
}
