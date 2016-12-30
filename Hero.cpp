#include <fstream>
#include "Hero.h"
#include <iostream>
#include <string>
using namespace std;


void Hero::showSpecials(string f, int z)
{
	string test;
	ifstream file;
	file.open(f, ios::in);
	for ( int x = 0; x < z; x++) //there are only 3 rogue dailies
	{
		while (true)
		{
          getline (file, test); //get a line from the file store it in test
          if (test == "NULL\r")
            test.pop_back();
          if (test == "NULL")
            break;
          setSpecial("\n", x); //add newline character to whole
          setSpecial(test, x); //add test to whole
        }
        cout << x + 1 << ". " << getSpecial(x+1) <<endl << endl;
    }
    file.close();
};

string Hero::getSpecial(int sp)
{ 
	return special[sp-1]; 
};

void Hero::setSpecial(string p, int sp)
{ 
	special[sp] += p; 
};

void Hero::Special()
{
  cout <<"ayy";
};


