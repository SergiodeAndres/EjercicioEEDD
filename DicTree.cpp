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
	string formated_string = ""; 
	for (int i = 0; i < str_length; i++) 
	{
		if (s[i]>=65 && s[i]<=92)
		{
			formated_string += (s[i]+32);
		}
		else if (s[i] == -61 && s[i+1] == -79) //ñ
		{
			formated_string.append("n");   
		}
		else if (s[i] == -61 && s[i+1] == -77) //ó
		{
			formated_string.append("o");  
		}
		else if (s[i] == -61 && s[i+1] == -95) //á
		{
			formated_string.append("a"); 
		}
		else if (s[i] == -61 && s[i+1] == -87) //é
		{
			formated_string.append("e");   
		}
		else if (s[i] == -61 && s[i+1] == -83) //í
		{
			formated_string.append("i");  
		}
		else if (s[i] == -61 && s[i+1] == -70) //ú
		{
			formated_string.append("u"); 
		}
		else if (s[i] == -61 && s[i+1] == -70) //ü
		{
			formated_string.append("u");  
		}
		else if (s[i] < 0)
		{
			
		}
		else 
		{
			formated_string += (s[i]);
		}
	}
	//cout << formated_string << endl;
	if (!Troot->hasChild(formated_string[0]))
	{
		Troot->insertChild(formated_string[0], false); 
	}
	DicTreeElem* new_node = Troot->getChild(formated_string[0]);
	string new_string = formated_string.substr(1, formated_string.length()-1);
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

bool DicTree::isInTree(string s)
{
	int str_length = s.length(); 
	string formated_string = ""; 
	for (int i = 0; i < str_length; i++) 
	{
		if (s[i]>=65 && s[i]<=92)
		{
			formated_string += (s[i]+32);
		}
		else if (s[i] == -61 && s[i+1] == -79) //ñ
		{
			formated_string.append("n");   
		}
		else if (s[i] == -61 && s[i+1] == -77) //ó
		{
			formated_string.append("o");  
		}
		else if (s[i] == -61 && s[i+1] == -95) //á
		{
			formated_string.append("a"); 
		}
		else if (s[i] == -61 && s[i+1] == -87) //é
		{
			formated_string.append("e");   
		}
		else if (s[i] == -61 && s[i+1] == -83) //í
		{
			formated_string.append("i");  
		}
		else if (s[i] == -61 && s[i+1] == -70) //ú
		{
			formated_string.append("u"); 
		}
		else if (s[i] == -61 && s[i+1] == -70) //ü
		{
			formated_string.append("u");  
		}
		else if (s[i] < 0)
		{
			
		}
		else 
		{
			formated_string += (s[i]);
		}
	}
	bool* found = new bool; 
	if (!Troot->hasChild(formated_string[0]))
	{
		*found = false;
	}
	else 
	{
		DicTreeElem* new_node = Troot->getChild(formated_string[0]);
		string new_string = formated_string.substr(1, formated_string.length()-1);
		*found = isInTree(new_string, new_node, found);
	}
	return *found; 
}

bool DicTree::isInTree(string s, DicTreeElem* node, bool* found)
{	
	if (s.length() > 0)
	{
		if (s.length() > 0 && !node->hasChild(s[0]))
		{
			*found = false; 
		}
		else {
			if (s.length() > 1 && node->hasChild(s[0]))
			{
				DicTreeElem* new_node = node->getChild(s[0]);
				string new_string = s.substr(1, s.length()-1);
				isInTree(new_string, new_node, found);
			}
			if (s.length() == 1 && node->hasChild(s[0]) && node->getChild(s[0])->getData()->getLast() == true)
			{
				*found = true; 
			}
		}
	}
	return *found; 
}

