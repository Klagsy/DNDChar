#include <fstream>
#include "Hero.h"
#include <iostream>
#include <string>
using namespace std;


void Hero::addStr(int s)
{ str += s; }

int Hero::getStr() const
{ return str; }

int Hero::getStrMod() const
{ return ((str/2)-5);}

void Hero::addCon(int c)
{ con += c; }

int Hero::getCon() const
{ return con; }

int Hero::getConMod() const
{ return ((con/2)-5);}

void Hero::addDex(int d)
{ dex += d; }

int Hero::getDex() const
{ return dex; }

int Hero::getDexMod() const
{ return ((dex/2)-5);}

void Hero::addIntel(int i)
{ intel += i; }

int Hero::getIntel() const
{ return intel; }

int Hero::getIntelMod() const
{ return ((intel/2)-5);}

void Hero::addWis(int w)
{ wis += w; }

int Hero::getWis() const
{ return wis; }

int Hero::getWisMod() const
{ return ((wis/2)-5);}

void Hero::addCha(int c)
{ cha += c; }

int Hero::getCha() const
{ return cha; }

int Hero::getChaMod() const
{ return ((cha/2)-5);}

void Hero::addAcrobatics(int a)
{ acrobatics += a; }

int Hero::getAcrobatics() const
{ return acrobatics; }

void Hero::addArcana(int a)
{ arcana += a; }

int Hero::getArcana() const
{ return arcana; }

void Hero::addAthletics(int a)
{ athletics += a; }

int Hero::getAthletics() const
{ return athletics; }

void Hero::addBluff(int b)
{ bluff += b; }

int Hero::getBluff() const
{ return bluff; }

void Hero::addDiplomacy(int d)
{ diplomacy += d; }

int Hero::getDiplomacy() const
{ return diplomacy; }

void Hero::addDungeoneering(int d)
{ dungeoneering += d; }

int Hero::getDungeoneering() const
{ return dungeoneering; }

void Hero::addEndurance(int e)
{ endurance += e; }

int Hero::getEndurance() const
{ return endurance; }

void Hero::addHeal(int h)
{ heal += h; }

int Hero::getHeal() const
{ return heal; }

void Hero::addHistory(int h)
{ history += h; }

int Hero::getHistory() const
{ return history; }

void Hero::addInsight(int i)
{ insight += i; pi += i; } //make sure to set passive insight as well

int Hero::getInsight() const
{ return insight; }

void Hero::addIntimidate(int i)
{ intimidate += i; }

int Hero::getIntimidate() const
{ return intimidate; }

void Hero::addNature(int n)
{ nature += n; }

int Hero::getNature() const
{ return nature; }

void Hero::addPerception(int p)
{ perception += p; pp +=p; } //make sure to set passive perception as
                                //well
int Hero::getPerception() const
{ return perception; }

void Hero::addReligion(int r)
{ religion += r; }

int Hero::getReligion() const
{ return religion; }

void Hero::addStealth(int s)
{ stealth += s; }

int Hero::getStealth() const
{ return stealth; }

void Hero::addStreetwise(int s)
{ streetwise += s; }

int Hero::getStreetwise() const
{ return streetwise; }

void Hero::addThievery(int t)
{ thievery += t; }

int Hero::getThievery() const
{ return thievery; }

void Hero::addInit(int i)
{ init += i; }

int Hero::getInit() const
{ return init; }

int Hero::getPi() const
{ return pi; }    
                      
int Hero::getPp() const 
{ return pp; }

void Hero::setHealth (int health, int y)
{ hp=health+y; }

void Hero::addHealth(int h)
{ hp += h; }

int Hero::getHealth() const
{ return hp; }

void Hero::addFort(int f)
{ fort += f; }

int Hero::getFort() const
{ return fort; }

void Hero::addReflex(int r)
{ reflex += r; }

int Hero::getReflex() const
{ return reflex; }

void Hero::addWill(int w)
{ will += w; }

int Hero::getWill() const
{ return will; }

void Hero::setAc(int a)
{ ac = a; }

void Hero::addAc(int a)
{ ac += a; }

int Hero::getAc() const
{ return ac; }

void Hero::setSpeed(int s)
{ speed = s; }

void Hero::addSpeed(int s)
{ speed += s; }

int Hero::getSpeed() const
{ return speed; }

void Hero::setSurges (int x, int y)
{ surges= x+y; }

void Hero::addSurges(int s)
{ surges += s; }

int Hero::getSurges() const
{ return surges; }

void Hero::setLevel(int l)
{ level = l; }

void Hero::addLevel(int l)
{ level += l; }

int Hero::getLevel() const
{ return level; }

void Hero::setGold (int g)
{ gold=g; }

int Hero::getGold() const
{ return gold; }

void Hero::setVision(std::string v)
{ vision = v; }

std::string Hero::getVision() const
{ return vision; }
    
void Hero::setSpecial (std::string p, int sp)
{ special[sp] += p; }
void Hero::showSpecials (std::string f, int z)
{
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
}

std::string Hero::getSpecial (int sp)
{ return special[sp-1]; }

void Hero::setatWill(std::string p, int i)
{ aw[i]+= p; }

void Hero::showAtWills (std::string f, int y, int z)
{
  std::ifstream file;
  file.open(f, std::ios::in);
  for ( int x = 0; x<y; x++)
    getline(file, test);

  for ( int x = 0; x < z; x++) 
  { 
    while (true)
    {
      getline (file, test); 
      if (test == "NULL\r")
        test.pop_back();
      if (test == "NULL")
        break;
      setatWill("\n", x); 
      setatWill(test, x); 
    }
    std::cout << x + 1 << ". " << getatWill(x+1) << std::endl << std::endl;
  }
file.close();
}
    
std::string Hero::getatWill(int i)
{ return aw[i-1]; }
    
void Hero::setEncounter(std::string p, int i)
{ e[i]+= p; }

void Hero::showEncounters(std::string f, int y, int z)
{
  std::ifstream file;
  file.open(f, std::ios::in);
  for ( int x = 0; x<y; x++)
    getline(file, test);

  for ( int x = 0; x < z; x++) //there are only 3 rogue dailies
  { 
    while (true)
      {
      getline (file, test); //get a line from the file store it in test
      if (test == "NULL\r")
        test.pop_back();
      if (test == "NULL")
        break;
      setEncounter("\n", x); //add newline character to whole
      setEncounter(test, x); //add test to whole
    }
    std::cout << x + 1 << ". " << getEncounter(x+1) << std::endl << std::endl;
  }
file.close();
}
    
std::string Hero::getEncounter(int i)
{ return e[i-1]; }
    
void Hero::setDaily(std::string p, int i)
{ d[i]+= p; }
    
void Hero::showDailies(std::string f, int y, int z)
{
  std::ifstream file;
  file.open(f, std::ios::in);
  for ( int x = 0; x<y; x++)
    getline(file, test);

  for ( int x = 0; x < z; x++) //there are only 3 rogue dailies
  { 
    while (true)
    {
      getline (file, test); //get a line from the file store it in test
      if (test == "NULL\r")
        test.pop_back();
      if (test == "NULL")
        break;
      setDaily("\n", x); //add newline character to whole
      setDaily(test, x); //add test to whole
    }
    std::cout << x + 1 << ". " << getDaily(x+1) << std::endl << std::endl;
  }
file.close();
}

std::string Hero::getDaily(int i)
{ return d[i-1]; }

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


