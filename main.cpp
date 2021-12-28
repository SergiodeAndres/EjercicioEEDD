#include <iostream>
#include "DicTree.hpp"
#include <fstream>
#include <chrono>
int main(int argc, char **argv)
{
    DicTree* t = new DicTree();
	ifstream inFile;
	string word; 
	inFile.open("diccionario.txt"); 
	auto start = std::chrono::steady_clock::now();
	while(!inFile.eof()) 
        {
			inFile >> word;
			t->insert(word);
        }
	 inFile.close();
	auto stop = std::chrono::steady_clock::now();
	auto diff = stop - start;
	cout << "Time to insert all words:" << chrono::duration <double, milli> (diff).count() << " milliseconds" << endl;
	if (t->isInTree("cthu"))
	{
		cout << "found";
	}
	else 
	{
		cout << "not found"; 
	}
    return 0;
}
