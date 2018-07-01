#include <iostream>
#include <list>
using namespace std;
void display(list<string> lyst){
    for(list<string>:: iterator it=lyst.begin();it!=lyst.end(); it++)
        cout<<*it<<" ";
    cout<<endl;
}
int main()
{
    list<string> names;
    names.push_back("Mary");
    names.push_back("Zach");
    list<string>::iterator it =  names.begin();
    while(it!= names.end()){

        cout<<*it<<endl;
        it++;
    }
    cout<<"front : "<<names.front()<< endl;
    cout<<"back : "<<names.back()<<endl;
    names.reverse();
    display(names);
    names.sort();
    display(names);
    names.push_front("Barry");
    display(names);
    cout<<"size of list: "<<names.size();
    cout<<endl;
    names.remove("Zach");
    display(names);
    names.pop_front();
    display(names);
    names.clear();
    if(names.empty()){
        cout<<"the list is empty"<<endl;

    }
    else{

        cout<<"the list is not empty"<<endl;
    }
    return 0;
}
