#include <iostream>

using namespace std;
class Queue{
private:
    string datastore[100];
    int back;
    const static int front = 0;
    void shift(){
         for(int i=0;i<=back;i++){

            datastore[i]=datastore[i+1];
         }
         back--;
               }
public:
    Queue(){
        back=-1;
    }
    void in(string value){
        ++back;
        datastore[back]=value;
    }
    string out(){
    string retVal = datastore[front];
    shift();
    return retVal;
    }
    void show(){
        for(int i=front; i<=back;i++){

            cout<<datastore[i]<<" ";
        }
        cout<<endl;
    }
    int count(){
    int c=0;
    for(int i=front;i<=back;i++)
        ++c;
        return c;
    }
    string fronti(){
        return datastore[front];
        }
    string backi(){
        return datastore[back];

    }
    bool isEmpty(){
        if(back==-1)
            return true;
        return false;

        }
    void clear(){
        for(int i= front; i<=back;i++)
            datastore[i]="";

    }
};
int main()
{
    Queue letters;
    letters.in("A");
    letters.in("B");
    letters.in("C");
    letters.show();
    letters.out();
    cout<<letters.fronti()<<endl;
    cout<<letters.backi()<<endl;
    cout<<letters.count()<<endl;
    letters.show();
    letters.in("D");
    letters.show();
    letters.out();
    letters.show();
        return 0;
}
