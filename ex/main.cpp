#include <iostream>


namespace mySpace{
    class myLine{
        std::string name;
    public:
        myLine(std::string text="\n\n"){ name=text;}
        ~myLine(){

        }
        std::string getText(){return name;}
        friend std::ostream & operator<<(std::ostream& out, myLine& obj);

    };
    std::ostream & operator<< (std::ostream& out, myLine& obj){
        out<<obj.getText();
        return out;
    }
    myLine endl;

}
using namespace mySpace;
int main()
{
   std::cout<<"my space is"<<endl;
    return 0;
}
