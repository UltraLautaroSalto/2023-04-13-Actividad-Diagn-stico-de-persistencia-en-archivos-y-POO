#include <Student.hpp>

void Student::setIdentifier(int idn){
    identifier = idn;
    return;
}

void Student::setName(string n1){
    name = n1;
    return;
}

void Student::setSurname(string sn1){
    surname = sn1;
    return;
}

int Student::Getidentifier(){
    return identifier;
}
string Student::GetName(){
    return name;
}
string Student::GetSurName(){
    return surname;
}