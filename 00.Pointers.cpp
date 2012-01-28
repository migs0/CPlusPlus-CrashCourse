#include <iostream>

int main() {
	
	int number = 10;
	int *address = &number;
	int *pointer;
	
	pointer = &number;
	
	
	/*
	 * Addresses
	 */
	std::cout
		<< "The variable 'number' is stored at the memory address "
		<< &number;
	std::cout << "\n"
		<< "The pointer 'address' is stored at the memory address "
		<< &address;
	std::cout << "\n"
		<< "The pointer 'pointer' is stored at the memory address "
		<< &pointer;
		
	std::cout << "\n";
	/**
	 * Values
	 */
	std::cout << "\n"
		<< "The variable 'number' has a value of "
		<< number;
	std::cout << "\n"
		<< "The pointer 'address' has a value of "
		<< address;
	std::cout << "\n"
		<< "The pointer 'pointer' has a value of "
		<< pointer;

	std::cout << "\n";	
	/*
	 * Value Reference
	 */
	std::cout << "\n"
		<< "The pointer 'address' can see the value of "
		<< *address;
	std::cout << "\n"
		<< "The pointer 'pointer' can see the value of "
		<< *pointer;
	
	std::cout << "\n";	
	/*
	 * Value Reference
	 */
	std::cout << "\n"
		<< "The pointer 'address' can see the value of "
		<< *address;
	std::cout << "\n"
		<< "The pointer 'pointer' can see the value of "
		<< *pointer;
	
	
	std::cout << "\n";
	return 0;
}