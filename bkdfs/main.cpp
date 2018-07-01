#include <iostream>

using namespace std;
class A{
protected:
    int a;
public:
    A(){

    }
    A(int a){
        this->a=a;
    }
    ~A(){
    }

};
class B : public A{
    int b;
public:
    B(int );
    ~B();
    void setB(int );
    int getB(){ return b; }

};
B :: B (int b) : A(a) {

    this->b=b;
}

B :: ~B(){


}
void B :: setB(int b){

    this->b=b;

}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
