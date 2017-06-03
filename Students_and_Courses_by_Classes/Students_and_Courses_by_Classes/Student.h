#include <string>
#include <iostream>
using namespace std;
class Student {
public:
	Student(); 
	~Student();
	void inputs(); //allows user to input values
	void output(); //output result into console
	void ResetCourses(); //reset values
	int setStudentID( int a);


private:
	string name;
	int numCourses;
	string *courseList;
	int studentID;
};