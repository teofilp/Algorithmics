#include <iostream>
#include "position.h"
using namespace std;
void setX(Position &,int);
int main()
{
  Position dog(10,15);

    dog.getPosition();
    dog.setPosition(50,100);
     setX(dog,1500);
    dog.getPosition();

   const Position house(100,200);

    house.getPosition();

    return 0;
}

void setX(Position &obj, int value){

    obj.x = value;
}
