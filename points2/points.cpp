#include "points.h"
#include <iostream>
using namespace std;


Point :: Point (int x){

    cout<<"The constructor from class Point has just been invoked"<<endl;
    this->x=x;


}

Point :: ~Point(){
     cout<<"The destructor from class Point has just been invoked"<<endl;
    this->x=x;

}

void Point:: setX(int x){


    this->x=x;

}

Point2D :: Point2D(int x, int y) : Point(x)
{
        cout<<"The constructor from class Point2D has just been invoked"<<endl;
        this->y=y;


}
Point2D :: ~Point2D(){

        cout<<"The destructor from class Point2D has just been invoked"<<endl;


}


void Point2D :: setY(int y){

    this->y=y;



}
void Point2D :: setXY(int x, int y){

    setX(x);
    setY(y);


}
Point2D Point2D :: operator+(Point2D a, Point2D b){

    Point2D rez;
    rez.x= a.x + b.x;
    rez.y= a.y + b.y;




    return rez;



}

Point3D :: Point3D (int x, int y, int z) : Point2D (x, y)
{
            cout<<"The constructor from class Point3D has just been invoked"<<endl;

    this->z=z;


}

Point3D :: ~Point3D(){

        cout<<"The destructor from class Point3D has just been invoked"<<endl;


}


void Point3D :: setZ(int z){

    this->z=z;


}


void Point3D :: setXYZ(int x, int y, int z){

    setXY(x, y);
    setZ(z);



}
