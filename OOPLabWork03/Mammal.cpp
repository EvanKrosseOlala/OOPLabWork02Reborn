#include "stdafx.h" 


using namespace std; 
 
	Mammal::Mammal(void) 
{ 
 	cout << "Entring of a Constructor for Mammal" << endl; } 
 
	void Mammal::setcolor(char *color) 
{ 
 	this->color = color; 
} 
 
	void Mammal::getcolor() 
{ 
 	cout << "Mammal's color: " << this->color << endl; 
} 
	Mammal::~Mammal(void) 
{ 
 	cout << "Entring of a Destructor for Mammal" << endl; 
} 
