// lab_inheritance_18l1174.cpp : Defines the entry point for the console application.
//

#include"faculty.h"
#include"person.h"
#include"student.h"

int main()
{
	student s1("Ted","Thompson",22,3.9);
	faculty f1("Richard","Karp",45,2,420);
	//s1.print;
	s1.printstudent();
	f1.printfaculty();
	system("pause");
	return 0;
}