#ifndef HERO_H
#define HERO_H
#include <fstream>
#include <iostream>
#include <string>

class Hero
{
  //initialize ints in private section of class
  int str, con, dex, intel, wis, cha; //these are the ability scores

  int ac, fort, reflex, will; //these are the the defences

  int speed, pi, pp, level; //movement, passive insight
                            //passive perception and their level

  int acrobatics, arcana, athletics, bluff, diplomacy, dungeoneering,
      endurance, heal, history, insight, intimidate, nature, perception,
      religion, stealth, streetwise, thievery; //these are skills
    
  int classChoiceA, classChoiceB, classChoiceC;
    
  int hp, init, surges, gold; // health, initiative, and amount of surges a day

  std::string name, languages, race, clas, age, gender, height, weight,
         deity, alignment, para, ed, vision, test, special[5], aw[5], e[5], d[5]; //random things containing character
                                   //info, para is paragon path and ed
                                   //is epic destiny

  //we will probably need ints and strings to hold weapon info
  public:

    Hero(int s, int c, int d, int i, int w, int ch, int l, std::string na, std::string cl, std::string ra);


    //any function with add will add an amount to an ability score
    //or skill, if it is labeled get it will return it to the main
    //program

    void addStr(int s)
    { str += s; }

    int getStr() const
    { return str; }

    int getStrMod() const
    { return ((str/2)-5);}


    void addCon(int c)
    { con += c; }

    int getCon() const
    { return con; }

    int getConMod() const
    { return ((con/2)-5);}

    void addDex(int d)
    { dex += d; }

    int getDex() const
    { return dex; }

    int getDexMod() const
    { return ((dex/2)-5);}

    void addIntel(int i)
    { intel += i; }

    int getIntel() const
    { return intel; }

    int getIntelMod() const
    { return ((intel/2)-5);}

    void addWis(int w)
    { wis += w; }

    int getWis() const
    { return wis; }

    int getWisMod() const
    { return ((wis/2)-5);}

    void addCha(int c)
    { cha += c; }

    int getCha() const
    { return cha; }

    int getChaMod() const
    { return ((cha/2)-5);}


    //Now we do all of the ability scores
    //I know this is a wall of text so you might want to skip ahead

    void addAcrobatics(int a)
    { acrobatics += a; }

    int getAcrobatics() const
    { return acrobatics; }

    void addArcana(int a)
    { arcana += a; }

    int getArcana() const
    { return arcana; }

    void addAthletics(int a)
    { athletics += a; }

    int getAthletics() const
    { return athletics; }

    void addBluff(int b)
    { bluff += b; }

    int getBluff() const
    { return bluff; }

    void addDiplomacy(int d)
    { diplomacy += d; }

    int getDiplomacy() const
    { return diplomacy; }

    void addDungeoneering(int d)
    { dungeoneering += d; }

    int getDungeoneering() const
    { return dungeoneering; }

    void addEndurance(int e)
    { endurance += e; }

    int getEndurance() const
    { return endurance; }

    void addHeal(int h)
    { heal += h; }

    int getHeal() const
    { return heal; }

    void addHistory(int h)
    { history += h; }

    int getHistory() const
    { return history; }

    void addInsight(int i)
    { insight += i; pi += i; } //make sure to set passive insight as well

    int getInsight() const
    { return insight; }

    void addIntimidate(int i)
    { intimidate += i; }

    int getIntimidate() const
    { return intimidate; }

    void addNature(int n)
    { nature += n; }

    int getNature() const
    { return nature; }

    void addPerception(int p)
    { perception += p; pp +=p; } //make sure to set passive perception as
                                //well
    int getPerception() const
    { return perception; }

    void addReligion(int r)
    { religion += r; }

    int getReligion() const
    { return religion; }

    void addStealth(int s)
    { stealth += s; }

    int getStealth() const
    { return stealth; }

    void addStreetwise(int s)
    { streetwise += s; }

    int getStreetwise() const
    { return streetwise; }

    void addThievery(int t)
    { thievery += t; }

    int getThievery() const
    { return thievery; }


    //did you think we were done? fucking cute, still got more!
    //now its time to create functions for defence and other atributes
    //like health and speed, because some of these haven't been
    //initialized yet we will need functions to set starting values

    void addInit(int i)
    { init += i; }

    int getInit() const
    { return init; }

    int getPi() const //we only need a get function for pi and pp because
    { return pi; }    //they are initialized in the constructer and values
                      //are added to them in the add perception and
    int getPp() const //add insight functions above
    { return pp; }

    void setHealth (int health, int y)
    { hp=health+y; }

    void addHealth(int h)
    { hp += h; }

    int getHealth() const
    { return hp; }


    void addFort(int f)
    { fort += f; }

    int getFort() const
    { return fort; }

    void addReflex(int r)
    { reflex += r; }

    int getReflex() const
    { return reflex; }

    void addWill(int w)
    { will += w; }

    int getWill() const
    { return will; }

    void setAc(int a)
    { ac = a; }

    void addAc(int a)
    { ac += a; }

    int getAc() const
    { return ac; }

    void setSpeed(int s)
    { speed = s; }

    void addSpeed(int s)
    { speed += s; }

    int getSpeed() const
    { return speed; }

    void setSurges (int x, int y)
    { surges= x+y; }

    void addSurges(int s)
    { surges += s; }

    int getSurges() const
    { return surges; }

    void setLevel(int l)
    { level = l; }

    void addLevel(int l)
    { level += l; }

    int getLevel() const
    { return level; }

    void setGold (int g)
    { gold=g; }

    int getGold() const
    { return gold; }

    void setVision(std::string v)
    { vision = v; }

    std::string getVision() const
    { return vision; }
    
    void setSpecial (std::string p, int sp)
    { special[sp] += p; }

    void showSpecials (std::string f, int y, int z)
    {
      std::ifstream file;
      file.open(f, std::ios::in);
      for ( int x = 0; x<z; x++)
        getline(file, test);

      for ( int x = 0; x < y; x++) //there are only 3 rogue dailies
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
        std::cout << x + 1 << ". " << getSpecial(x+1) << std::endl << std::endl;
      }
    file.close();
    }
    
    std::string getSpecial (int sp)
    { return special[sp]; }

    void setatWill(std::string p, int i)
    { aw[i]+= p; }

    void showAtWills (std::string f, int y, int z)
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
    
    std::string getatWill(int i)
    { return aw[i-1]; }
    
    void setEncounter(std::string p, int i)
    { e[i]+= p; }

    void showEncounters(std::string f, int y, int z)
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
    
    std::string getEncounter(int i)
    { return e[i-1]; }
    
    void setDaily(std::string p, int i)
    { d[i]+= p; }
    
    void showDailies(std::string f, int y, int z)
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

    std::string getDaily(int i)
    { return d[i-1]; }
};

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


  //initializing some strings down here so we can write less functions
  name = na;
  clas = cl;
  race = ra;
  //might be more things we can initialize here, but i'm unsure,
  //lets leave this like this for now
}

#endif
