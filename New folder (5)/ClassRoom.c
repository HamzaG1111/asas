#ifndef CLASSROOM_H
#define CLASSROOM_H

#include "Student.h"

class ClassRoom {
private:
    string className;
    int numStudents;
    Student studentArray[10];

public:
    // Constructor with class name
    ClassRoom(string cName);

    // Getter and Setter for number of students
    int getNumStudents() const;
    void setNumStudents(int nStudents);

    // Getter and Setter for student array
    Student* getStudentArray();
    void setStudentArray(Student students[], int nStudents);

    // Function to read and create student array
    void readAndCreateStudentArray();

    // Function to display all students
    void displayAllStudents() const;

    // Function to calculate average GPA of all students
    double calcStudentAvg() const;

    // Function to get number of students
    int getNumberStudents() const;
};

#endif
