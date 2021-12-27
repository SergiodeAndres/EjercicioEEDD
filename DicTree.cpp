#include "DicTree.hpp"
#include <iostream>
DicTree::DicTree()
{
	DicTreeData* rootData = new DicTreeData('-', false); 
	DicTreeElem* rootNode = new DicTreeElem(rootData, nullptr, nullptr); 
	Troot = rootNode; 
}

DicTree::~DicTree()
{
}

void DicTree::insert(string s)
{	
	int str_length = s.length(); 
	for (int i = 0; i <= str_length; i++) 
	{
		if (s[i]>=65 && s[i]<=92)
		{
			s[i]=s[i]+32;
		}
		//Do something about accents
	}
	if (!Troot->hasChild(s[0]))
	{
		Troot->insertChild(s[0], false); 
	}
	DicTreeElem* new_node = Troot->getChild(s[0]);
	string new_string = s.substr(1, s.length()-1);
	insert(new_string, new_node); 
}

DicTreeElem* DicTree::getRoot()
{
	return Troot; 
}

void DicTree::insert(string s, DicTreeElem* node)
{	
	if (s.length() > 0)
	{
		if (!node->hasChild(s[0]))
		{
			if(s.length() == 1)
			{
				node->insertChild(s[0], true);
			}
			else 
			{
				node->insertChild(s[0], false);
			}
		}
		DicTreeElem* new_node = node->getChild(s[0]);
		string new_string = s.substr(1, s.length()-1);
		insert(new_string, new_node);
	}
	else {
		return; 
	}
}

