#ifndef DICTREE_HPP
#define DICTREE_HPP

#include "DicTreeElem.hpp"

class DicTree
{
	DicTreeElem* Troot; 
	void insert(string s, DicTreeElem* node);
	bool isInTree(string s, DicTreeElem* node, bool* found);
public:
	DicTree();
	~DicTree();
	
	void insert(string s);
	DicTreeElem* getRoot(); 
	bool isInTree(string s); 
};

#endif // DICTREE_HPP
