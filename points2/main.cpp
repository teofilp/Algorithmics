#include <iostream>
#include "points.h"
using namespace std;
void operationOnPoints();
int main()
{

        operationOnPoints();

    return 0;
}
void operationOnPoints(){

Point3D p1(10,20);
   cout<<p1.getX()<<endl;
   cout<<p1.getY()<<endl;
   cout<<p1.getZ()<<endl;

}
