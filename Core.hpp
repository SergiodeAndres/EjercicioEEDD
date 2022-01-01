#ifndef CORE_HPP
#define CORE_HPP
#include "DicTree.hpp"
#include "Queue.hpp"
#include "List.hpp"
#include <fstream>
#include <chrono>
#include <iostream>
class Core
{
	DicTree* tree; 
public:
	Core();
	~Core();
	DicTree* GetTree(); 
	void menu(DicTree* tree); 
	string generateString(); 

};

#endif // CORE_HPP
