#include"faculty.h"
#include"person.h"
#include"student.h"

faculty::faculty():course_count(0),extention(0)
{
	person();
	cout<<"default constructor of faculty was invoked"<<endl;
}
faculty::faculty(string fname,string lname,int age,int course_count,int extention):person(fname,lname,age)
{
	this->course_count=course_count;
	this->extention=extention;
	cout<<"parameterized constructor for faculty was invoked"<<endl;
}
//faculty::faculty(const faculty&other)
//{
//	person(other);
//	this->course_count=other.course_count;
//	this->extention=other.extention;
//}
int faculty:: getcourse_count()
{
	return course_count;
}
int faculty::getextention()
{
	return extention;
}
void faculty::setcourse_count(int setcourse)
{
	this->course_count=course_count;
}
void faculty::setextention(int extention)
{
	this->extention=extention;
}
void faculty::printfaculty()
{
	(*this).print();
	cout<<"number of courses being taught:"<<getcourse_count()<<endl<<"extention number:"<<getextention()<<endl;
}
faculty::~faculty()
{
	cout<<"destructor for faculty was invoked"<<endl;
}
