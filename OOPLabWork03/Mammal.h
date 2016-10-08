#pragma once 

#include "stdafx.h" 

 class Mammal :  	public Animal
{ 
 	char *color;

 public: 
 	Mammal(void); 

 	void setcolor(char *color);  	
	void getcolor(); 
 
 	~Mammal(void); 
}; 
