#include"faculty.h"
#include"person.h"
#include"student.h"

student::student():cgpa(0.0)
{
	person();
	cout<<"default constructor was invoked"<<endl;
}
student::student(string fname,string lname,int age,float cgpa):person(fname,lname,age)
{
	this->cgpa=cgpa;
	cout<<"paramerised constructor was invoked"<<endl;
}
//student::student(const student& other)
//{
//	person(other);
//	this->cgpa=cgpa;
//}
float student::getcgpa()
{
	return cgpa;
}
void student::setgpa(float gpa)
{
	this->cgpa=cgpa;
}
void student::printstudent()
{
	(*this).print();
	//cout<<"name:"<<fname<<lname<<endl;
	cout<<"cgpa:"<<cgpa<<endl;
}
student::~student()
{
	cout<<"destructor for student was invoked"<<endl;
}