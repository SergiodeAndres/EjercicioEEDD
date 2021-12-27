#include <iostream>
#include "DicTree.hpp"

int main(int argc, char **argv)
{
    DicTree* t = new DicTree(); 
	t->insert("caso"); 
	t->insert("casa");
	t->insert("caos");
	t->insert("bobo");
    return 0;
}
