#include <iostream>

#include <string.h>

using namespace std;

int main()
{
    char v[]= "Ana are mere";
    for(int i=0;i<strlen(v);i++){
            if(v[i]>='a'&&v[i]<='z')
            v[i]=v[i]-'a'+'A';

    }
    cout<<v;
    /*
    -strlen: lungimea stringului;
    -srcpy: copiaza tot stringul;
    -strncp: copiaza un nr dat de elementa;
    -strcat: concateneaza doua stringuri;
    -strncat: concateneaza n elem;
    -strcmp: compara doua stringuri;
    -strncmp: compara n elemente;
    -strstr: cauta un substring intr-un alt string i itit da locatia;
    */

    return 0;
}
