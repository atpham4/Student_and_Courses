/*Angela Pham*/


#include <iostream>
#include "Student.h"
using namespace std;



int main() {
	int counter = 1; //Count the amount of time a student is entered
	Student *student = new Student[counter]; //Creates an array for one entry of the student
	Student *studentID = new Student[counter]; 
	
	string ans = "y";

	while (ans == "y") { 
		if (counter > 1) {
			Student *temp = new Student[counter]; //create a new array element for new entries
			for (int i = 0; i < counter-1; i++) {
				temp[i] = student[i];
			}
			delete[] student;
			student = temp;
		}
		student[counter-1].inputs(); //add inputs into the array element counter-1
		student[counter-1].setStudentID(counter); //add ID of student (incrementing by one)
		counter++;
		cout << "Would you like to input a new student? <y/n> ";
		cin >> ans;
		cout << endl;
	}
	
	cout << "Number of Students created: " << counter-1 << endl;
	cout << endl;
	for (int i = 0; i < counter - 1; i++) {
		student[i].output(); //output elements of each student
		cout << endl;
	}
	system("pause");
	return 0;
}