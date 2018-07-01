#include <iostream>


namespace mySpace{
    class MyNewLine{
        std::string text;
    public:
        MyNewLine(std::string text="\n\n\nasdf"){ this->text= text; }
        std::string toString(){
            return text;
        }

    };
    ostream & operator<<(ostream & out, MyNewLine & obj){
        return out <<obj.toString();


    }
    MyNewLine endl;
}
int main()
{
    int a = 50;
    std::cout<<"this is text: "<<mySpace::endl;

    return 0;
}
