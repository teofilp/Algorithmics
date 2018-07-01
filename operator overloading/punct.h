#ifndef PUNCT_H_INCLUDED
#define PUNCT_H_INCLUDED
template <typename T>
class punct{
    T x,y;
public:
    punct(T =0, T =0);
    ~punct();
    void setX(T );
    void setY(T );
    void setXY(T , T );
    T getX(){ return x;}
    T getY(){ return y;}
    punct operator+(punct);


};
template <typename T>
punct<T> :: punct(T x, T y){

    this->x=x;
    this->y=y;


}
template <typename T>
punct<T> :: ~punct(){


}
template <typename T>
void punct<T> :: setX(T x){
    this->x=x;


}
template <typename T>
void punct<T> :: setY(T y){
    this->y=y;


}
template <typename T>
void punct<T> :: setXY(T x, T y){
    setX(x);
    setY(y);

}
template <typename T>
punct<T> punct<T> :: operator+(punct a){
    punct tmp;

    tmp.setX(this->getX() + a.getX());
    tmp.setY(this->getY() + a.getY());
return tmp;

}

#endif // PUNCT_H_INCLUDED
