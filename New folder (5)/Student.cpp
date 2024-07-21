#include "Student.h"
#include <iostream>
using namespace std;

// Null Constructor
Student::Student() : firstName(""), lastName(""), studentID(""), gpa1(0.0), gpa2(0.0) {}

// Constructor with parameters
Student::Student(string fName, string lName, string id, double g1, double g2) 
    : firstName(fName), lastName(lName), studentID(id), gpa1(g1), gpa2(g2) {}

// Getter and Setter for first name
string Student::getFirstName() const { return firstName; }
void Student::setFirstName(string fName) { firstName = fName; }

// Getter and Setter for last name
string Student::getLastName() const { return lastName; }
void Student::setLastName(string lName) { lastName = lName; }

// Getter and Setter for student ID
string Student::getStudentID() const { return studentID; }
void Student::setStudentID(string id) { studentID = id; }

// Getter and Setter for first GPA
double Student::getGPA1() const { return gpa1; }
void Student::setGPA1(double g1) { gpa1 = g1; }

// Getter and Setter for second GPA
double Student::getGPA2() const { return gpa2; }
void Student::setGPA2(double g2) { gpa2 = g2; }

// Function to calculate average GPA
double Student::calcAvgGpa() const { return (gpa1 + gpa2) / 2; }

// Function to display student information
void Student::displayStudent() const {
    cout << lastName << "\t" << firstName << "\t" << studentID 
         << "\t" << gpa1 << "\t" << gpa2 << "\t" << calcAvgGpa() << endl;
}
