#include <iostream>

using namespace std;
class Animal{

    virtual void talk() = 0;


};
class Dog : public Animal{
    public:
    virtual void talk()
    {
        cout<<"Woof"<<endl;

    }

};
class Cat : public Animal{

public:
    virtual void talk(){
        cout<<"Meow"<<endl;
    }
};

int main()
{
   Dog fido;
   Cat kitty;
   fido.talk();
   kitty.talk();
    return 0;
}
