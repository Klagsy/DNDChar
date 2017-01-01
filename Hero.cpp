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
}

void Hero::setSpecial(string p, int sp)
{ 
	special[sp] += p; 
}

Hero::Hero(int s, int c, int d, int i, int w, int ch, int l, std::string na, std::string cl, std::string ra)
{
  str = s; //initialzing all of the ability scores
  con = c;
  dex = d;
  intel = i;
  wis = w;
  cha = c;
  level = l;

  acrobatics = (dex/2)-5 + (level / 2); //this is initializing all
  arcana = (intel/2)-5 + (level / 2);   //of the skills
  athletics = (str/2)-5 + (level / 2);
  bluff = (cha/2)-5 + (level / 2);
  diplomacy = (cha/2)-5 + (level / 2);
  dungeoneering = (wis/2)-5 + (level / 2);
  endurance = (con/2)-5 + (level / 2);
  heal = (wis/2)-5 + (level / 2);
  history = (intel/2)-5 + (level / 2);
  insight = (wis/2)-5 + (level / 2);
  intimidate = (cha/2)-5 + (level / 2);
  nature = (wis/2)-5 + (level / 2);
  perception = (wis/2)-5 + (level / 2);
  religion = (intel/2)-5 + (level / 2);
  stealth = (dex/2)-5 + (level / 2);
  streetwise = (cha/2)-5 + (level / 2);
  thievery = (dex/2)-5 + (level / 2);

  init = (dex/2)-5 + (level / 2); //initialize the initiative
  pi = insight + 10; //initialize the passive insight
  pp = perception + 10; //initialize the passive perception

  //we have to wait to see what armor they have to initialize armor class
  //but the other defences can still be initialized

  //use if statements to check which ability score is higher
  if (str >= con) {fort = ((str/2)-5 + (level / 2)) + 10;}
  else if (con > str) {fort = ((con/2)-5 + (level / 2)) + 10;}

  if (dex >= intel) {reflex = ((dex - 10) / 2 + (level / 2)) + 10;}
  else if (intel > dex) {reflex = ((intel/2)-5 + (level / 2)) + 10;}

  if (wis >= cha) {will = ((str/2)-5 + (level / 2)) + 10;}
  else if (cha > wis) {will = ((con/2)-5 + (level / 2)) + 10;}


  // initializing some strings down here so we can write less functions
  name = na;
  clas = cl;
  race = ra;
  //might be more things we can initialize here, but i'm unsure,
  //lets leave this like this for now
}

Hero::Hero()
{

}
// void Hero::Special()
// {
  // cout <<"ayy";
// };


