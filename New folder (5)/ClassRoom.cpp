#include "ClassRoom.h"
#include <fstream>
#include <iostream>
using namespace std;

// Constructor with class name
ClassRoom::ClassRoom(string cName) : className(cName), numStudents(0) {}

// Getter and Setter for number of students
int ClassRoom::getNumStudents() const { return numStudents; }
void ClassRoom::setNumStudents(int nStudents) { numStudents = nStudents; }

// Getter and Setter for student array
Student* ClassRoom::getStudentArray() { return studentArray; }
void ClassRoom::setStudentArray(Student students[], int nStudents) {
    for (int i = 0; i < nStudents; ++i) {
        studentArray[i] = students[i];
    }
    numStudents = nStudents;
}

// Function to read and create student array
void ClassRoom::readAndCreateStudentArray() {
    ifstream inFile("studentInfo.txt");
    if (!inFile) {
        cerr << "Unable to open file studentInfo.txt";
        exit(1);   // call system to stop
    }

    string lName, fName, studentID;
    double gpa1, gpa2;
    int index = 0;

    while (inFile >> lName >> fName >> studentID >> gpa1 >> gpa2) {
        Student studentObj(fName, lName, studentID, gpa1, gpa2);
        studentArray[index] = studentObj;
        ++index;
    }
    numStudents = index;

    inFile.close();
}

// Function to display all students
void ClassRoom::displayAllStudents() const {
    cout << "Last Name\tFirst Name\tStudent ID\tGPA1\tGPA2\tAverage GPA\n";
    cout << "-------------------------------------------------------------\n";
    for (int i = 0; i < numStudents; ++i) {
        studentArray[i].displayStudent();
    }
}

// Function to calculate average GPA of all students
double ClassRoom::calcStudentAvg() const {
    double totalAvg = 0.0;
    for (int i = 0; i < numStudents; ++i) {
        totalAvg += studentArray[i].calcAvgGpa();
    }
    return totalAvg / numStudents;
}

// Function to get number of students
int ClassRoom::getNumberStudents() const { return numStudents; }
