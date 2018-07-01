#include "persoane.h"
#include <iostream>
#include <strings.h>
    void persoana:: setAge(int value){
        if(value<0)
            age=0;
        else
            age=value;

    }

    void persoana:: setNume(string nm){
        if(nm.length()==0)
            nume="N/A";
        else
            nume=nm;

    }
