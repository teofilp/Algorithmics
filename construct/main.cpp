#include <iostream>

using namespace std;
 struct ob{
 int v;
 string nume;
 };
int main()
{
    ob v[1];
    v[0].v=1;
    v[0].nume="ana";
    cout<<v[0].v<<" "<<v[0].nume;
    return 0;
}
