#include <iostream>
#include <string>
using namespace std;

class stack1{

private:
    string datastore[100];
    int top;
public:
    stack1(){
    top=-1;
    }
    ~stack1(){

    }
    void push(string val){
        ++top;
        datastore[top]=val;

    }
    string pop(){
        string retVal =datastore[top];
        --top;
        return retVal;
    }
    string peek(){

    return datastore[top];
    }
    int count(){
        return top+1;

    }
    void clear(){
        for(int i=0;i<top;i++)
            datastore[i]="";
        top=-1;
    }
    bool isEmpty(){
        if(top==-1)
            return true;
        return false;

    }
    };

int main()
{
    stack1 names;
    names.push("Mary");
    names.push("Joe");
    cout<<" number of items is " <<names.count()<< endl;
    if(!names.isEmpty())
        names.pop();
    cout<<" number of items is " <<names.count()<< endl;
    names.clear();
    cout<<" number of items is " <<names.count()<< endl;
    return 0;
}
