#include "Student.h"
#include<list>
#include <iostream>
using namespace std;

list<Student> listStudents;

void showAllStudents()
{
	for (Student item: listStudents) {
		cout << "Name: " << item.name << " - " << item.age << "years old" << endl;
	}
}

void addStudent(Student newStudent)
{
	listStudents.push_back(newStudent);
}

void sortsAlafavit()
{
	listStudents.sort(comp);
}

bool comp(Student a, Student b)
{
	return a.name < b.name;
}
