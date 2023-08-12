#include <iostream> 
#include "Student.h"
#include "Undergrad.h"
#include <string>
#include<limits> // used to get numeric limits

void intro(){
	std::cout << "Hello user, welcome to USC portal" << std::endl;
	std::cout << "What kind of student are you? " << std::endl;
	std::cout << "_________________" << std::endl;
	std::cout << "Undergraduate |  1" << std::endl;
	std::cout << "Graduate      |  2" << std::endl;
	std::cout << "Post Graduate |  3" << std::endl;
	std::cout << "_________________" << std::endl;
}


int main(){
	Undergrad ug;
	int a = 0;

	intro();

	while(1){
		std::cin >> a;
		if(std::cin.fail()){

			std::cout << "fail" <<std::endl;

			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //clear buffer before taking newline
			std::cin >> a;	
		}	
		if(!std::cin.fail()){
			if(a == 1 || a == 2 || a ==3){
				break;
			}
			else {
				std::cout << "invalid number chioce" << std::endl;
			}
		}
	}
	
	int studentFlag;
	if(a == 1){
		std::cout << "You are a Undergraduate Student" <<  std::endl;
		studentFlag = 1;
	}
	else if(a == 2){
		std::cout << "You are a Graduate Student" << std::endl;
		studentFlag = 2;

	}
	else {
		std::cout << "You are a Post Graudate Student" << std::endl;
		studentFlag =3;
	}

	std::cout << " 1. Login" << std::endl;
	std::cout << " 2. Learn more" << std::endl;
	std::cout << "What would you like to do?" << std::endl;	
	
	while(1){
		std::cin >> a;
		if(std::cin.fail()){
			std::cout << "fail" <<std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //clear buffer before taking newline
			std::cin >> a;	
		}	
		if(!std::cin.fail()){
			if(a == 1 || a == 2){
				break;
			}
			else {
				std::cout << "invalid number chioce" << std::endl;
			}
		}
	}	
	
	if(a == 1){
		std::cout << "yay" << std::endl;
	}
	else if(a == 2){
		std::cout << "noo" << std::endl;
	}

	if(studentFlag == 1) {
		std::cout << "yay" << std::endl;

	}
		
	
//	std::cout << myStudent.getNumber() << std::endl;
	//myUndergrad.fun();
	//myUndergrad.description();
	
}
