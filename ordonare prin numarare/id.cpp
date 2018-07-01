#include "id.h"
#include <iostream>

void id::setUsername(string username){
    this->username=username;
}
void id::setUsername(string password){

    this->password=password;
}
    id:: id(){

        username="N/A";
        password="N/A";
    }

    id:: ~id(){



    }

    id::getUsername(){

        return username;

    }

    id::getPassword(){

        return (int)password;
    }



