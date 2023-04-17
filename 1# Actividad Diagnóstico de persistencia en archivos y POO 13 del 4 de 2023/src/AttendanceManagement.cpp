#include <AttendanceManagement.hpp>

AttendanceManagement::AttendanceManagement()
{
}

AttendanceManagement::~AttendanceManagement()
{
}
/***
 * @TODO:
***/
void AttendanceManagement::takeAttendance(Student *student, Course *course, string datetime, bool state){
    ifstream testOpenFile("attendance.csv");
    bool fileExists = testOpenFile.good();
    testOpenFile.close();

    ofstream csvFile;
    csvFile.open("attendance.csv", ofstream::app);
    if(!fileExists){
        csvFile << "ID del Estudiante "
                << "Nombres/s "
                << "Apellido/s "
                << "Id del Material "
                << "Nombre de la Materia "
                << "Marca Temporal "
                << "Presente\n";
    }
    csvFile << student->Getidentifier() << " , "
            << student->GetName() << " , "
            << student->GetSurName() << " , "
            << course->getIdentifier() << " , "
            << course->getName() << " , "
            << datetime << " , "
            << state << "\n";
    csvFile.close();
}

void AttendanceManagement::showAttendance(){
    ifstream csvFile("attendance.csv");
    if (csvFile.is_open())
        cout << csvFile.rdbuf();
    csvFile.close();
}