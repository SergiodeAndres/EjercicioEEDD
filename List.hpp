#ifndef LIST_HPP
#define LIST_HPP
#include "ListElement.hpp"

class List
{
	ListElement* header; 
public:
	List();
	~List();
	void insert(string s, int position); //Insert an element in a certain position
	bool isEmpty(); 
	int length(); //Length of the list
	ListElement* retrieve (int position); 
	void remove (int position); 
	void specialInsert(string s); 
	bool isInList(string s); 
	void increaseRep(string s); 
	

};

#endif // LIST_HPP
