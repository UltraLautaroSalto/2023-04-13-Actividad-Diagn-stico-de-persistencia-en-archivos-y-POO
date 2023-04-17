#ifndef COURSE_HPP
#define COURSE_HPP
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <main.cpp>
using namespace std;

class Course
{
    public:
        Course();
        ~Course();
        void setIdentifier(int){}
        void setName(string){}
        int getIdentifier(){}
        string getName(){}
    public:
        int identifier;
        string name;
};

#endif