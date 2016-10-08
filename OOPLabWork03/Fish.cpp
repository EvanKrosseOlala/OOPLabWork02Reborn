#include "stdafx.h"


using namespace std; 
 
Fish::Fish(void) 
{ 
 	cout<<"Entring of a Constructor for Fish"<<endl; 
} 
 
void Fish::setlifestyle(char *lifestle) 
{ 
	this->lifestyle = lifestyle; 
} 
 
void Fish::getlifestyle() 
{ 
 	cout << "LifeStyle of Fish: " << this->lifestyle << endl; 
} 
 
Fish::~Fish(void) 
{ 
 	cout << " Entring of a Destructor for Fish " << endl; 
} 
