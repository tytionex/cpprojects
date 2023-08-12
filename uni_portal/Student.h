#ifndef STUDENT_H
#define STUDENT_H
#include <string>

class Student
{
	private:
		int studentNumber;
		std::string name;
	public:
		Student();
		int getNumber();
		virtual void fun() =0;
		virtual void description() =0;
		virtual void classes() =0;
};

#endif
