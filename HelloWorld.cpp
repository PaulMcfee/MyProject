#include <iostream>
#include "Human.h"


int main() {
	// this is a main

	std::cout << "Hello World" << "\n";

	Human gabriel(20, "Stone", "Gabriel");

	Human human();
	
	gabriel.incrementAge();
	std::cout << gabriel.getAge();
	/*
	
		Adding comment lines
	*/


	Human *p;
	p = new Human(25, "Paul", "McChicken");

}