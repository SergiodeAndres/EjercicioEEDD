#include "Core.hpp"
int main(int argc, char **argv)
{
	Core c = Core(); 
	c.menu(c.GetTree()); 
    return 0;
	/*DicTree* t = new DicTree();
	string file_name;
    cout << "Introduce the file name of the dictionary:" << endl;
    cin >> file_name; 
    ifstream file;
    file.open(""+file_name+".txt");
	string word; 
	while(!file.eof()) 
        {
			file >> word;
			t->insert(word);
        }
	 file.close();
	 if (t->isInTree("berb"))
	{
	cout << "Found";
	}
	else 
	{
		cout << "Not Found"; 
	}*/
}
