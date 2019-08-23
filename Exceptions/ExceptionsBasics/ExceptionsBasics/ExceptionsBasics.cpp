// ExceptionsBasics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>

/**
 *	A fuction designed to throw an error
 */
void mightGoWrong() {
	bool error = false;
	bool anotherError = true;

	if (error) {
		// In throw we can throw any data type we want, such as an int, string or object. 
		// when catching though, we must catch the correct data type
		throw "Something went wrong";
	}

	if (anotherError) {
		throw std::string("Something broke or some craic");
	}
}

/**
 *	A function which calls mightGoWrong
 *	Note that this function does not handle exceptions, these exceptions continue to be thrown to main where they are then handled
 */
void usesMightGoWrong()
{
	mightGoWrong();
}


int main()
{
	// We must catch the error in order for the code to run
	try {
		mightGoWrong();
	}
	catch (int e) {
		// the argument has to be the correct data type as that which is thrown.
		std::cout << "Error Code " << e << std::endl;

		// When an exception is thrown we probably need to take action to remedy it.
	}
	catch (char const * e) {
		// We can add multiple catches to catch different data types which may be thrown.
		std::cout << "Error Code " << e << std::endl;
	}
	catch (std::string e) {
		std::cout << "Error Code " << e << std::endl;
	}

	try {
		usesMightGoWrong();
	}
	catch (int e) {
		// the argument has to be the correct data type as that which is thrown.
		std::cout << "Error Code " << e << std::endl;

		// When an exception is thrown we probably need to take action to remedy it.
	}
	catch (char const * e) {
		// We can add multiple catches to catch different data types which may be thrown.
		std::cout << "Error Code " << e << std::endl;
	}
	catch (std::string e) {
		std::cout << "Error Code " << e << std::endl;
	}

    std::cout << "Hello World!\n"; 
}
