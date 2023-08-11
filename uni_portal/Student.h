#ifndef STUDENT_H
#define STUDENT_H


class Student
{
	private:
		int number;
	public:
		Student();
		int getNumber();
		virtual void fun() =0;
};

#endif
