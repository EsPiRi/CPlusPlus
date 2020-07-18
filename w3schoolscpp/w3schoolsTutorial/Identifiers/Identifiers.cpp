
/*The general rules for constructing names for variables (unique identifiers) are:

    Names can contain letters, digits and underscores
    Names must begin with a letter or an underscore (_)
    Names are case sensitive (myVar and myvar are different variables)
    Names cannot contain whitespaces or special characters like !, #, %, etc.
    Reserved words (like C++ keywords, such as int) cannot be used as names
*/
#include <iostream>

int main()
{
    //variable names should be understandable.
	int minutesPerHour = 60;

	//it can be any name, but it is hard to understand what the variable is
	int m = 60;
}


