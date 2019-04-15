#pragma once
#include<string>
#include<iostream>
using namespace std;

class person
{
private:
	string fname;
	string lname;
protected:
	int age;
public:
	//constructors
	person();
	person(string fname,string lname,int age);
	person(const person&);
	//getters
	string getfname();
	string getlname();
	//setters
	void setfname(string);
	void setlname(string);
	void setage(int);
	void print();
	~person();
};