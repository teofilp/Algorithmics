#include <iostream>

using namespace std;
class A{
    protected:
        int a;
    public:
        A(int );
        ~A();
        void setA(int );
        int getA(){ return a; }

};

A:: A(int a){
    this->a=a;

}
A:: ~A(){

}
void A:: setA(int a){
    this->a=a;


}
class B : public A{
private:
    int b;
public:
    B(int );
    ~B();
    void setB(int );
    int getB(){ return b;}


};
B :: B(int b) : A(a){
    this->b=b;


}
B :: ~B(){


}
void B:: setB(int b){
    this->b=b;
}


int main()
{

   A biscuite(10);
   cout<<biscuite.getA();
    return 0;
}
