#include <Course.hpp>

void Course::setIdentifier(int idn){
    identifier = idn;
    return;
}

void Course::setName(string n){
    name = n;
    return;
}

int Course::getIdentifier(){
    return identifier;
}

string Course::getName(){
    return name;
}