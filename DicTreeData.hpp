#ifndef DICTREEDATA_HPP
#define DICTREEDATA_HPP
#include <string>
using namespace std; 

class DicTreeData
{
	char Letter;
	bool Lastletter; 
public:
	DicTreeData();
	DicTreeData(char p_letter, bool p_last);
	~DicTreeData();
	
	void setLetter(char p_letter); 
	char getLetter(); 
	void setLast(bool last); 
	char getLast(); 

};

#endif // DICTREEDATA_HPP
