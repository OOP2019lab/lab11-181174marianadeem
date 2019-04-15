#pragma once
#include"person.h"

class student:private person
{
private:
	float cgpa;
public:
	student();
	student(string fname,string lname,int age,float cgpa);
	student(const student&);
	float getcgpa();
	void setgpa(float);
	void printstudent();
	~student();
};