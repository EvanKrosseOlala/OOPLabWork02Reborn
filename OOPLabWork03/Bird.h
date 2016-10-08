#pragma once

#include "stdafx.h"

 class Bird :  	public Animal
{ 
 	char *habitat; 
 public: 
	 Bird(void);  	
	void sethabitat (char *habitat);  	
	void gethabitat(); 
	~Bird(void); 
}; 