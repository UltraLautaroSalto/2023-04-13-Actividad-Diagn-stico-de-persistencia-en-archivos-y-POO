#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <main.cpp>
using namespace std;

class Student
{
    public:
        Student();
        ~Student();
        void setIdentifier(int){}
        void setName(string){}
        void setSurname(string){}
        int Getidentifier(){}
        string GetName(){}
        string GetSurName(){}
    private:
        int identifier;
        string name;
        string surname;
};

#endif