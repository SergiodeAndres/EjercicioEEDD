#ifndef DICTREE_HPP
#define DICTREE_HPP

#include "DicTreeElem.hpp"

class DicTree
{
	DicTreeElem* Troot; 
	void insert(string s, DicTreeElem* node);
public:
	DicTree();
	~DicTree();
	
	void insert(string s);
	DicTreeElem* getRoot(); 
};

#endif // DICTREE_HPP
