#ifndef POINTS_H_INCLUDED
#define POINTS_H_INCLUDED

class Point{
protected:
    int x;
public:
    Point(int =0);
    ~Point();
    void setX(int );
    int getX(){ return x;}





};

class Point2D : public Point
{

protected:
    int y;
public:
    Point2D(int =0, int =0);
    ~Point2D();
    void setY(int );
    int getY(){ return y;}
    void setXY(int, int );
    Point2D operator+(Point2D, Point2D);



};

class Point3D : public Point2D
{
protected:
    int z;
public :
    Point3D(int =0, int =0, int =0);
    ~Point3D();
    void setZ(int );
    int getZ(){ return z;}
    void setXYZ(int =0 , int =0 , int =0 );




};

#endif // POINTS_H_INCLUDED
