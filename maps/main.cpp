#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, string> numbers;
    numbers["Jones"]= "365";
    numbers["Smith"]= "467";
    numbers["Brown"]="111";
    cout<<"Jones: "<<numbers["Jones"]<<endl;
    cout<<"number or numbers : "<<numbers.size()<<endl;
    numbers.erase("Smith");
    cout<<"number or numbers : "<<numbers.size()<<endl;
    map<string, int> grades;
    grades["Jones"]=78;
    grades["Smith"]=83;
    grades["Green"]=92;
    string names;
    cout<<"Enter a name to find : ";
    cin>>names;
    if(grades.find(names)!=grades.end())
        cout<<names <<" : "<<grades[names]<<endl;
    else
        cout<<names<< " not found "<<endl;
    double average =0.0;
    int sum =0;
    map<string, int>:: iterator it=grades.begin();
    while(it!=grades.end()){
         sum+=it->second;
         it++;
    }
    average = sum / grades.size();
   cout<<"the average grade is : "<<average;
    return 0;
}
