#include "stdafx.h" 



	
using namespace std;  


	Animal::Animal(void) 
{ 
 	cout << "Entring of a Constructor for Animal" << endl; 
}
	
	void Animal::setname(char *name) 
{ 
	this->name = name; 
}

	void Animal::getname() 
{ 
 	cout << " Name: "<<this->name << endl; 
}
 
	Animal::~Animal(void) 
{ 
 	cout << "Entring of a Destructor for Mammal" << endl; 
}
