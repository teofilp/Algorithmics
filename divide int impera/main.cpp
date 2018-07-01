#include <iostream>

using namespace std;
int mini(int i, int j){
int a,b,m;
if(i==j)
    return v[i];
else


{
    m=(i+j)/2;
    a=mini(i,m);
    b=mini(m+1,j);
    if(a<b)
        return a;
    return b;
}

}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
