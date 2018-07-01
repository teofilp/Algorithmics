#include <iostream>
#include <string.h>
using namespace std;

int vocala(char n){

    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
        return 1;
    else
        return 0;


}

int main()
{

    string caracter;
    getline(cin,caracter);
    int c=0;



   for(int i=0;i<caracter.size();i++){

   if(vocala(caracter[i]))
        caracter[i]=caracter[i]-32;


   }


     for(int i=0;i<caracter.size();i++)
        cout<<caracter[i];







    return 0;
}
