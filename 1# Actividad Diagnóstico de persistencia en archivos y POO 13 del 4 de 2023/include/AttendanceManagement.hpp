#ifndef ATTENDANCEMANAGEMENT_HPP
#define ATTENDANCEMANAGEMENT_HPP
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <main.cpp>
#include <Course.hpp>
#include <Student.hpp>
using namespace std;

class AttendanceManagement{
    public:
        AttendanceManagement();
        virtual ~AttendanceManagement();
        void takeAttendance(Student* student, Course* course, string datetime, bool state){}
        void showAttendance(){}
    private:

};

#endif;