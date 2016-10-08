#pragma once 
#include "stdafx.h" 

 class Fish :  	public Animal
{ 
 	char *lifestyle; 
 public: 
 	Fish(void); 
 
 	void setlifestyle(char *lifestyle); 
 	void getlifestyle(); 
 
 	~Fish(void); 
}; 
