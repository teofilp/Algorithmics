#include <iostream>
#include "point.h"
using namespace std;
void operationOnPoints();
typedef Point<int> PointInt;
template <typename T, typename T2>
T add(T var1, T2 var2){
    return var1 + var2;
}
/*
template <>
Point2D add( Point2D var1, Point2D var2){
    Point2D tmp;
    tmp.setX(var1.getX()+var2.getX());
    tmp.setY(var1.getY()+var2.getY());
    return tmp;
}
*/
int main()
{
    operationOnPoints();
     ///  cout<<add<double, double>(5.2,9.0)<<endl;
       /// cout<<static_cast<int>(6)<<endl;
    return 0;
}
void operationOnPoints(){

    PointInt a(10.5);
    Point3D<double> b(10.5, 15);
    cout<<a.getX()<<endl;
    cout<<b.getX()<<endl;
    cout<<b.getY()<<endl;
    cout<<b.getZ()<<endl;
}
