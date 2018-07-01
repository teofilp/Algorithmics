#include "punct.h"
#include <iostream>
using namespace std;

punct :: punct(int x, int y){

    this->x=x;
    this->y=y;


}

punct :: ~punct(){


}

void punct :: setX(int x){
    this->x=x;


}

void punct :: setY(int y){
    this->y=y;


}

void punct :: setXY(int x, int y){
    setX(x);
    setY(y);

}

punct punct :: operator+(punct a){
    punct tmp;

    tmp.setX(this->getX() + a.getX());
    tmp.setY(this->getY() + a.getY());
return tmp;

}
