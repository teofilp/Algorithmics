#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

template <typename T>
class Point{
protected:
    T x;
public:
    Point(T =0);
    ~Point();
    void setX(T x);
    T getX(){ return x;}


};
template<typename T>
Point<T>:: Point(T x){
    this->x=x;

}
template<typename T>

Point<T> :: ~Point(){

}
template<typename T>

void Point<T> :: setX(T x){
    this->x=x;
}
template <typename T>
class Point2D : public Point<T>{
protected:
    T y;
public:
    Point2D(T =0, T =0);
    ~Point2D();
    void setY(T y);
    T getY(){ return y;}
    void setXY(T , T );
    Point2D operator+(Point2D);



};
template <typename T>
Point2D<T> :: Point2D(T x, T y) : Point<T>(x){
    this->y=y;


}
template <typename T>
Point2D<T> :: ~Point2D(){



}
template <typename T>
void Point2D<T> :: setY(T y){
    this->y=y;



}
template <typename T>
void Point2D<T> :: setXY(T x, T y){

    setX(x);
    setY(y);



}
template <typename T>
Point2D<T> Point2D<T> :: operator+(Point2D obj){

    Point2D tmp;
        tmp.setX(this->getX()+obj.getX());
        tmp.setY(this->getY()+obj.getY());
        return tmp;

}
template <typename T>
class Point3D : public Point2D<T>{
    T z;
public :
    Point3D(T =0, T =0, T =0);
    ~Point3D();
    void setZ(T );
    T getZ(){ return z;}
    void setXYZ(T , T , T);


};
template <typename T>
Point3D<T> :: Point3D(T x, T y, T z) : Point2D<T> (x,y){

    this->z=z;

}
template <typename T>
Point3D<T> :: ~Point3D(){

}

template <typename T>
void Point3D<T> :: setZ(T z){
    this->z=z;


}
template <typename T>
void Point3D<T> :: setXYZ(T x, T y, T z){
    setXY(x,y);
    setZ(z);


}

#endif // POINT_H_INCLUDED
