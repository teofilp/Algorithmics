#include <iostream>

using namespace std;


typedef struct personalData
{
    string name;
    string surname;
    string telephoneNumeber;
    short age;


};
int main()
{
    personalData person[5];

    person[0].name="Tudor";
    person[0].surname="Filp";
    person[0].telephoneNumeber="45654564";
    person[0].age=22;

    cout<< (*person).name<<endl;
    cout<< (*&person[0]).surname<<endl;
    cout<< person->telephoneNumeber<<endl;
    cout<< person[0].age<<endl;


    return 0;
}
