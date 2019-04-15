#include"person.h"

person::person()
{
	this-> fname="";
	this->lname="";
	this->age=0;
	cout<<"default constructor is invoked for person"<<endl;
}
person::person(string fname,string lname,int age)
{
	this-> fname=fname;
	this->lname=lname;
	this->age=age;
	cout<<"parameterized constructor was invoked for person"<<endl;
}
//person::person(const person&other)
//{
//	this-> fname=other.fname;
//	this->lname=other.lname;
//	this->age=other.age;
//}

string person:: getfname()
{
	return fname;
}
string person:: getlname()
{
	return lname;
}

void person::setfname(string fname)
{
	this->fname=fname;
}
void person::setlname(string lname)
{
	this->lname=lname;
}
void person::setage(int age)
{
	this->age=age;
}
void person::print()
{
	cout<<"name:"<<getfname()<<getlname()<<endl<<"age:"<<age<<endl;
}
person::~person()
{
	cout<<"destructor is invoked for person"<<endl;
}