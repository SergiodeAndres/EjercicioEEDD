#include "Core.hpp"

Core::Core()
{
	DicTree* t = new DicTree();
	tree = t; 
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
}

Core::~Core()
{
}

DicTree* Core::GetTree()
{
	return tree; 
}

void Core::menu(DicTree* tree)
{
	bool repeat = true;
    while (repeat)
	{
		int option;
		// Texto del menú
			cout << "PROGRAM MENU"<< endl;
			cout << "1. SEARCH WORD IN TREE" << endl;
			cout << "2. TREE INFORMATION" << endl;
			cout << "3. STRING GENERATION" << endl;
			cout << "4. REVERSE DICTIONARY" << endl;
			cout << "5. EXIT" << endl;
		cout << "Introduce option:" << endl;
		cin >> option;
		switch (option) {
				case 1:
				{
					string search_word; 
					cout << "Introduce word to look for:"; 
					cin >> search_word; 
					if (tree->isInTree(search_word))
					{
						cout << "The word " << search_word << " is in the dictionary\n"; 
					}
					else 
					{
						cout << "The word " << search_word << " is not in the dictionary\n";
					}
					break;
				}
				case 2:
				{	
					break;
				}
				case 3:
				{
					string char_string = generateString(); 
					int total_words = 1; 
					for (int i = 0; i < 50000; i++)
					{
						if (char_string[i] == 32)
						{
							total_words = total_words + 1; 
						}
					}
					string file_name;
					cout << "Introduce the savefile name:" << endl;
					cin >> file_name; 
					ofstream file;
					file.open(""+file_name+".txt");
					for (int i = 0; i < 50000; i++ )
					{
						if (char_string[i] == 32)
						{
							file << "\n"; 
						}
						else 
						{
							file << char_string[i]; 
						}
					}
					file.close(); 
					Queue* q = new Queue();
					string word_queue = ""; 
					for (int i = 0; i < 50000; i++)
					{
						if (char_string[i] == 32)
						{
							q->Enqueue(word_queue); 
							word_queue = ""; 
						}
						else 
						{
							word_queue += char_string[i]; 
						}
					}
					List* l1 = new List();
					auto start = std::chrono::steady_clock::now();
					while (!q->IsEmpty())
					{
						string check_word = q->Dequeue(); 
						if (tree->isInTree(check_word))
						{
							l1->insert(check_word, 0); 
						}
					}
					auto stop = std::chrono::steady_clock::now();
					auto diff = stop - start;
					cout << "Time to analyze all generated words: " << chrono::duration <double, milli> (diff).count() << " milliseconds" << endl;
					cout << "Correct words\n";
					for (int i = 0; i < l1->length(); i++)
					{
						if (i == l1->length()-1)
						{
							cout << l1->retrieve(i)->getData()->getWord() << "\n"; 
						}
						else 
						{
							cout << l1->retrieve(i)->getData()->getWord() << "-";
						}
					}
					cout << total_words << " words were generated, of which " << l1->length() << " were correct\n"; 
					List* l2 = new List();
					auto start2 = std::chrono::steady_clock::now();
					while (!l1->isEmpty())
					{
						l2->specialInsert(l1->retrieve(0)->getData()->getWord()); 
						l1->remove(0); 
					}
					auto stop2 = std::chrono::steady_clock::now();
					auto diff2 = stop2 - start2;
					cout << "Time to analyze all correct words and see which are repeated: " << chrono::duration <double, milli> (diff2).count() << " milliseconds" << endl;
					cout <<"Repeated words \n"; 
					for (int i = 0; i < l2->length(); i++)
					{
						if (l2->retrieve(i)->getData()->getRepeats() > 1)
						{
							cout << l2->retrieve(i)->getData()->getWord() << " - " << l2->retrieve(i)->getData()->getRepeats() << "\n";
						}
					}
					break;
				}
				case 4:
				{
				break;
				}
				case 5:
				{
				repeat = false;
				break;
				}
				default: 
				cout << "Non-valid option";
				break;
		}
	}
}

string Core::generateString()
{
	srand(time(NULL));
	string letters [25] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "u", "v", "w", "x", "y", "z"}; 
	int letters_used = 0; 
	string words = ""; 
	for (int i = 0; i < 50000; i++)
	{
		if (letters_used < 3)
		{
			words.append(letters[rand() % 24]); 
			letters_used = letters_used + 1; 
		}
		else if (letters_used == 3)
		{
			int percentage = rand() % 100; 
			if (percentage < 20) 
			{
				words.append(" "); 
				letters_used = 0; 
			}
			else 
			{
				words.append(letters[rand() % 24]); 
				letters_used = letters_used + 1;
			}
		}
		else if (letters_used == 4)
		{
			int percentage = rand() % 100; 
			if (percentage < 30) 
			{
				words.append(" "); 
				letters_used = 0; 
			}
			else 
			{
				words.append(letters[rand() % 24]); 
				letters_used = letters_used + 1;
			}
		}
		else if (letters_used == 5)
		{
			int percentage = rand() % 100; 
			if (percentage < 40) 
			{
				words.append(" "); 
				letters_used = 0; 
			}
			else 
			{
				words.append(letters[rand() % 24]); 
				letters_used = letters_used + 1;
			}
		}
		else if (letters_used == 6)
		{
			int percentage = rand() % 100; 
			if (percentage < 50) 
			{
				words.append(" "); 
				letters_used = 0; 
			}
			else 
			{
				words.append(letters[rand() % 24]); 
				letters_used = letters_used + 1;
			}
		}
		else if (letters_used == 7)
		{
			int percentage = rand() % 100; 
			if (percentage < 60) 
			{
				words.append(" "); 
				letters_used = 0; 
			}
			else 
			{
				words.append(letters[rand() % 24]); 
				letters_used = letters_used + 1;
			}
		}
		else if (letters_used == 8)
		{
			int percentage = rand() % 100; 
			if (percentage < 70) 
			{
				words.append(" "); 
				letters_used = 0; 
			}
			else 
			{
				words.append(letters[rand() % 24]); 
				letters_used = letters_used + 1;
			}
		}
		else if (letters_used == 9)
		{
			int percentage = rand() % 100; 
			if (percentage < 80) 
			{
				words.append(" "); 
				letters_used = 0; 
			}
			else 
			{
				words.append(letters[rand() % 24]); 
				letters_used = letters_used + 1;
			}
		}
		else if (letters_used == 10)
		{
			int percentage = rand() % 100; 
			if (percentage < 90) 
			{
				words.append(" "); 
				letters_used = 0; 
			}
			else 
			{
				words.append(letters[rand() % 24]); 
				letters_used = letters_used + 1;
			}
		}
		else if (letters_used == 11)
		{
			int percentage = rand() % 100; 
			if (percentage < 95) 
			{
				words.append(" "); 
				letters_used = 0; 
			}
			else 
			{
				words.append(letters[rand() % 24]); 
				letters_used = letters_used + 1;
			}
		}
		else 
		{
			words.append(" "); 
			letters_used = 0; 
		}
	}
	return words;
}