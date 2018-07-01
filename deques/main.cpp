#include <iostream>
#include <deque>
using namespace std;

int find(deque<string> d, string value){

    for(int i=0;i<d.size();i++)
    if(d.at(i)==value){
        return i;

    }
    return -1;

}

int main()
{
    deque<string> line;
    line.push_back("Costumer 1");
    line.push_front("Costumer 2");
    line.push_back("Costumer 3");
    for(int i=0 ;i<line.size();i++){

        cout<<line[i]<<endl;
    }
    cout<<endl;
    line.pop_back();
    line.pop_front();
 for(int i=0 ;i<line.size();i++){

        cout<<line[i]<<endl;
    }
    cout<<find(line, "Costumer 1");
    deque<string>::iterator iter=line.begin();
    ++iter;
    line.insert(iter, "Costumer 4");

    return 0;
}
