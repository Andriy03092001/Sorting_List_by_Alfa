#pragma once
#include<string>
using namespace std;

struct Student
{
	string name;
	int age;
};

void showAllStudents();
void addStudent(Student newStudent);
void sortsAlafavit();
bool comp(Student a, Student b);