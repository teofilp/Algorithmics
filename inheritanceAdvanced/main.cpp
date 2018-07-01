#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

class Employee{
    protected:
        string name;
        double pay;
public:
    Employee(){
        name="";
        pay=0;

    }
    Employee(string empName, double payRate){

        name= empName;
        pay=payRate;

    }
    ~Employee(){

    }
    string getName(){ return name; }
    void setName(string empName){
        name = empName;
    }
     double getPay(){ return pay; }
    void setPay(double payRate){
            pay=payRate;
    }
    string toString(){
        stringstream stm;
        stm << name << ": " << pay;
        return stm.str();

        }
        virtual double grossPay(int hours){
            return pay * hours;
        }

};
class Manager : public Employee {
private:
    bool salaried;

public:
    Manager() : salaried(true){ }
    Manager(string name, double payRate, bool isSalaried)
        : Employee(name, payRate){

            salaried= isSalaried;
        }
    ~Manager(){

    }
    bool getSalaried(){ return salaried; }


        virtual double grossPay(int hours){
        if(salaried){
            return pay;
        }
            return pay * hours;
        }
    string toString(){
        stringstream stm;
        string salary;
        if(salaried){
            salary= "Salaried";
        }
        else
            salary= "Hourly";
        stm << name << ": " << pay
        <<" : "<<salary ;
        return stm.str();

        }


};

int main()
{

  Employee emp1("Jones", 25.00);
  Manager mgr1("Smith", 1200, true);
  Employee *empPtr;
  empPtr = &emp1;
  cout<< "Name : " << empPtr->getName()<<endl;
  cout<< "Pay : "<<empPtr->grossPay(40)<<endl;
    empPtr=&mgr1;
   cout<< "Name : " << empPtr->getName()<<endl;
  cout<< "Pay : "<<empPtr->grossPay(40)<<endl;
    vector<Employee*> employees;
    employees.push_back(&emp1);
    employees.push_back(&mgr1);
    for(int i=0; i<employees.size();i++)
    {
        cout<<"Name: "<<employees[i]->getName()
        <<endl;
        cout<<"Pay: "<<employees[i]->grossPay(40)
        <<endl;
    }


    return 0;
}
