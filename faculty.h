#pragma once
#include"person.h"
//#include"faculty.h"
#include"student.h"

class faculty: private person
{
private:
	int course_count;
	int extention;
public:
	faculty();
	faculty(string fname,string lname,int age,int course_count,int extention);
	faculty(const faculty&);
	int getcourse_count();
	int getextention();
	void setcourse_count(int);
	void setextention(int);
	void printfaculty();
	~faculty();
};