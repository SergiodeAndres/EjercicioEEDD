#include "DicTreeElem.hpp"

DicTreeElem::DicTreeElem()
{
}

DicTreeElem::DicTreeElem(DicTreeData* p_data, DicTreeElem* p_left, DicTreeElem* p_right)
{
	Tdata = p_data; 
	Leftchild = p_left; 
	Rightsibling = p_right; 
}

DicTreeElem::~DicTreeElem()
{
}

void DicTreeElem::setData(DicTreeData* p_data)
{
	Tdata = p_data; 
}

DicTreeData* DicTreeElem::getData()
{
	return Tdata; 
}

void DicTreeElem::setLeftchild(DicTreeElem* p_left)
{
	Leftchild = p_left; 
}

DicTreeElem* DicTreeElem::getLeftchild()
{
	return Leftchild; 
}

void DicTreeElem::setRightsibling(DicTreeElem* p_right)
{
	Rightsibling = p_right; 
}

DicTreeElem* DicTreeElem::getRightsibling()
{
	return Rightsibling; 
}

bool DicTreeElem::hasChild(char c)
{
	bool child_found = false; 
	DicTreeElem* aux = getLeftchild();
	while (aux != nullptr)
	{
		if (aux->getData()->getLetter() == c)
		{
			child_found = true; 
		}
		aux = aux->getRightsibling(); 
	}
	return child_found; 
}

void DicTreeElem::insertChild(char c, bool last)
{
	DicTreeData* nodeData = new DicTreeData(c, last); 
	DicTreeElem* node = new DicTreeElem(nodeData, nullptr, nullptr);
	DicTreeElem* aux = getLeftchild(); 
	if (getLeftchild() == nullptr)
	{
		setLeftchild(node); 
	}
	else {
		while (aux->getRightsibling() != nullptr)
		{
			aux = aux->getRightsibling(); 
		}
		aux->setRightsibling(node); 
	}
}

DicTreeElem* DicTreeElem::getChild(char c)
{
	DicTreeElem* aux = getLeftchild(); 
	DicTreeElem* child = nullptr; 
	while (aux != nullptr)
	{	
		if (aux->getData()->getLetter() == c)
		{
			child = aux; 
		}
		aux = aux->getRightsibling(); 
	}
	return child; 
}

