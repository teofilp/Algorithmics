#include "our_first_class.h"
#include<iostream>
using namespace std;
void personalData::setAge(int value){
      if(value<0)
            age=0;
           else
        age=value;



}
personalData::personalData(){
    static int i=0;
    cout<<++i<<endl;
    age=10;
}
personalData::~personalData(){


}


