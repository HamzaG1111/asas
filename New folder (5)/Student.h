#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    string firstName;
    string lastName;
    string studentID;
    double gpa1;
    double gpa2;

public:
    // Null Constructor
    Student();

    // Constructor with parameters
    Student(string fName, string lName, string id, double g1, double g2);

    // Getter and Setter for first name
    string getFirstName() const;
    void setFirstName(string fName);

    // Getter and Setter for last name
    string getLastName() const;
    void setLastName(string lName);

    // Getter and Setter for student ID
    string getStudentID() const;
    void setStudentID(string id);

    // Getter and Setter for first GPA
    double getGPA1() const;
    void setGPA1(double g1);

    // Getter and Setter for second GPA
    double getGPA2() const;
    void setGPA2(double g2);

    // Function to calculate average GPA
    double calcAvgGpa() const;

    // Function to display student information
    void displayStudent() const;
};

#endif
