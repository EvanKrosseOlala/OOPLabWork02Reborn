#include "stdafx.h"


using namespace std; 
 
	Bird::Bird(void) 
{ 
 	cout  << " Entring of a Constructor for Birds " << endl; 
} 
 
void Bird::sethabitat(char *habitat) 
{ 
this->habitat = habitat; 
} 
 
void Bird::gethabitat() 
{ 
 	cout <<" Habitat  : " << this->habitat << endl; 
} 
 
Bird::~Bird(void) 
{ 
 	cout <<" Entring of a Constructor for Birds " << endl; 
} 

