#include <iostream>
#include "ClassRoom.h"
using namespace std;

int main() {
    ClassRoom myClass("CSC-134");
    myClass.readAndCreateStudentArray();
    myClass.displayAllStudents();
    cout << "\nThe average score of all students is: " 
         << myClass.calcStudentAvg() << endl;
    cout << "\nTotal students in this class: " 
         << myClass.getNumberStudents() << endl;
    return 0;
}
