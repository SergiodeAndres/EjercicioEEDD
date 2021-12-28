#ifndef DICTREEELEM_HPP
#define DICTREEELEM_HPP

#include "DicTreeData.hpp"
class DicTreeElem
{
	DicTreeData* Tdata; 
	DicTreeElem* Leftchild; 
	DicTreeElem* Rightsibling; 
public:
	DicTreeElem();
	DicTreeElem(DicTreeData* p_data, DicTreeElem* p_left, DicTreeElem* p_right);
	~DicTreeElem();
	
	void setData(DicTreeData* p_data); 
	DicTreeData* getData(); 
	void setLeftchild(DicTreeElem* p_left); 
	DicTreeElem* getLeftchild();
	void setRightsibling(DicTreeElem* p_right); 
	DicTreeElem* getRightsibling();
	
	bool hasChild(char c); 
	void insertChild(char c, bool last); 
	DicTreeElem* getChild(char c); 

};

#endif // DICTREEELEM_HPP