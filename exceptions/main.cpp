#include <iostream>

using namespace std;

int main()
{
    char a = 5;

    try{
        a*=10;
        if(a==50)
            throw a;
        cout<<"here are other instructions"<<endl;

    }
    catch(double e){
    cout<<"A cannot be equal to "<<a << endl;
    }

    catch(...)
    {
        cout<<"this is going to be"<<endl;
    }

    return 0;
}
