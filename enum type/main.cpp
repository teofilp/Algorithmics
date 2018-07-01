#include <iostream>

using namespace std;
enum dayOfWeek {M=1,TU,W,TH,F,SA,SN};

string getDay(dayOfWeek);
int main()
{
    dayOfWeek d=M;

    cout<<d<<endl;

    cout<<dayOfWeek(W)<<endl;

    cout<<getDay(dayOfWeek(1))<<endl;
    int i;
    cin>>i;
    cout<<getDay(dayOfWeek(i));

    return 0;
}
string getDay(dayOfWeek d){


switch (d){
case M:
    return "Monday";
    case TU:
    return "Tuesday";
    case W:
    return "Wednesday";
    case TH:
    return "Thursday";
    case F:
    return "Friday";
    case SA:
    return "Saturday";
    case SN:
    return "Sunday";
    default :
    return "You typed something wrong";


}
}
