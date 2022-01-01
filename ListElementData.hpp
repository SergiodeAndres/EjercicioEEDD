#ifndef LISTELEMENTDATA_HPP
#define LISTELEMENTDATA_HPP

#include <string>
using namespace std; 

class ListElementData
{
	string word;
	int repeatition; 
public:
	ListElementData();
	ListElementData(int p_rep, string p_word);
	int getRepeats();
	void setRepeats(int p_rep);
	string getWord();
	void setWord(string p_word);
	~ListElementData();

};

#endif // LISTELEMENTDATA_HPP
