#ifndef PERSOANE_H_INCLUDED
#define PERSOANE_H_INCLUDED
#include <string.h>
#include <iostream>
using namespace std;
class persoana{
private:
    int age;
    string nume;
public:
    void setAge(int value);
    void setNume(string nm);
    string getNume(){
    return nume;}
    short getAge(){
    return age;}


};

#endif // PERSOANE_H_INCLUDED
