#include "Student.h"
#include <limits>

using namespace std;

Student::Student(): name(""), numCourses(0), courseList(NULL)
{
	
}

Student::~Student() {
	numCourses = 0;
	ResetCourses();
	name = "";
}

void Student::ResetCourses() 
{
	delete[] courseList;
	courseList = NULL;
	numCourses = 0;
}

int Student::setStudentID(int a)
{
	return studentID = a;
}

void Student::inputs()
{
	ResetCourses();
	cout << "Enter student name: " << endl;
	cin >> name;
	cout << "Enter number of courses: " << endl;
	cin >> numCourses;
	courseList = new string[numCourses];
	for (int i = 0; i < numCourses; i++) {
		cout << "Enter course " << (i+1) << ": ";
		if (i == 0) {
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
		}
		getline(cin, courseList[i]);
	}
	cout << endl;
}


void Student::output()
{
	cout << "Name of Student " << studentID << ": " << name << endl << "Courses: ";
	for (int i = 0; i < numCourses; i++) {
		if (i == numCourses - 1) {
			cout << courseList[i] << endl;
		}
		else {
			cout << courseList[i] << ", ";
		}
	}
}




