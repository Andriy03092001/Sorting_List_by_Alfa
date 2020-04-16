#include<iostream>
#include "Student.h"
using namespace std;

int main() {

	Student temp;
	temp.age = 20;
	temp.name = "Zenia";
	addStudent(temp);


	temp.age = 20;
	temp.name = "Andrii";
	addStudent(temp);



	temp.age = 20;
	temp.name = "Kate";
	addStudent(temp);

	temp.age = 20;
	temp.name = "Alisa";
	addStudent(temp);


	cout << "Before sort: " << endl;
	showAllStudents();



	sortsAlafavit();



	cout << endl << endl;
	cout << "After sort: " << endl;
	showAllStudents();





	return 0;
}