#include <iostream> 
#include "Student.h"
#include "Undergrad.h"
#include<limits> // used to get numeric limits

int main(){

	int a = 0;

	std::cout << "Hello user, welcome to USC portal" << std::endl;
	std::cout << "What kind of student are you? " << std::endl;
	std::cout << "_________________" << std::endl;
	std::cout << "Undergraduate |  1" << std::endl;
	std::cout << "Graduate      |  2" << std::endl;
	std::cout << "Post Graduate |  3" << std::endl;
	std::cout << "_________________" << std::endl;

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

	if(a == 1){
		std::cout << "You are a Undergraduate Student" <<  std::endl;
	}
	else if(a == 2){
		std::cout << "You are a Graduate Student" << std::endl;
	}
	else {
		std::cout << "You are a Post Graudate Student" << std::endl;
	}

	Undergrad myUndergrad;
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

	std::cout << a << std::endl;
	
//	std::cout << myStudent.getNumber() << std::endl;
	//myUndergrad.fun();
	//myUndergrad.description();
	
}
