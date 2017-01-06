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
         deity, alignment, para, ed, vision, test, special[7], aw[5], e[5], d[5]; //random things containing character
                                   //info, para is paragon path and ed
                                   //is epic destiny

  //we will probably need ints and strings to hold weapon info
  public:

    Hero(int s, int c, int d, int i, int w, int ch, int l, std::string na, std::string cl, std::string ra);
    Hero();
    void addStr(int s);
    int getStr() const;
    int getStrMod() const;
    void addCon(int c);
    int getCon() const;
    int getConMod() const;
    void addDex(int d);
    int getDex() const;
    int getDexMod() const;
    void addIntel(int i);
    int getIntel() const;
    int getIntelMod() const;
    void addWis(int w);
    int getWis() const;
    int getWisMod() const;
    void addCha(int c);
    int getCha() const;
    int getChaMod() const;
    void addAcrobatics(int a);
    int getAcrobatics() const;
    void addArcana(int a);
    int getArcana() const;
    void addAthletics(int a);
    int getAthletics() const;
    void addBluff(int b);
    int getBluff() const;
    void addDiplomacy(int d);
    int getDiplomacy() const;
    void addDungeoneering(int d);
    int getDungeoneering() const;
    void addEndurance(int e);
    int getEndurance() const;
    void addHeal(int h);
    int getHeal() const;
    void addHistory(int h);
    int getHistory() const;
    void addInsight(int i);
    int getInsight() const;
    void addIntimidate(int i);
    int getIntimidate() const;
    void addNature(int n);
    int getNature() const;
    void addPerception(int p);
    int getPerception() const;
    void addReligion(int r);
    int getReligion() const;
    void addStealth(int s);
    int getStealth() const;
    void addStreetwise(int s);
    int getStreetwise() const;
    void addThievery(int t);
    int getThievery() const;
    void addInit(int i);
    int getInit() const;
    int getPi() const;    
    int getPp() const;
    void setHealth (int health, int y);
    void addHealth(int h);
    int getHealth() const;
    void addFort(int f);
    int getFort() const;
    void addReflex(int r);
    int getReflex() const;
    void addWill(int w);
    int getWill() const;
    void setAc(int a);
    void addAc(int a);
    int getAc() const;
    void setSpeed(int s);
    void addSpeed(int s);
    int getSpeed() const;
    void setSurges (int x, int y);
    void addSurges(int s);
    int getSurges() const;
    void setLevel(int l);
    void addLevel(int l);
    int getLevel() const;
    void setGold (int g);
    int getGold() const;
    void setVision(std::string v);
    std::string getVision() const;
    void setSpecial (std::string p, int sp);
    void showSpecials (std::string f, int z);
    std::string getSpecial (int sp);
    void setatWill(std::string p, int i);
    void showAtWills (std::string f, int y, int z);
    std::string getatWill(int i);
    void setEncounter(std::string p, int i);
    void showEncounters(std::string f, int y, int z);
    std::string getEncounter(int i);
    void setDaily(std::string p, int i);
    std::string getDaily(int i);
    void showDailies(std::string f, int y, int z);
};
#endif
