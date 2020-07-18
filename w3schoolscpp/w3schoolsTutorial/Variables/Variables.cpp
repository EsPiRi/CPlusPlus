
#include <iostream>

int main()
{

	int myNum = 15;
	float myFloatNum = 5.99f;
	char myLetter = 'a';
	std::string myText = "hello";
	bool myBoolean = true;


	int myAge = 27;
	std::cout << "I am " << myAge << " years old." << std::endl;

	int x = 5;
	int y = 6;
	int sum = x + y;
	std::cout << sum << std::endl;

	//declaring many variables in one line
	int a = 5, b = 6, c = 7;
	std::cout << a + b + c<<std::endl;

	//declaring constant variables, you have to assign its value after initialization.
	const int myNum2=20;
	const int minutesPerHour = 60;
	const float PI = 3.14;
	
	// You can not change const variables after declaring its value;
	//myNum2 = 15; !!!

	std::cout << myNum << std::endl;
}

