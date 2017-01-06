#include "Hero.h"
#include "Armors.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void UPPERCASE(string &s);

int main()
{
  cout << "Hello and welcome to the D&D 4e character builder, helping"
       << " create characters since 1882\nPlease ensure that you "
       << "enter any information correctly cause no going back!";

  cout << "\nTo start with, what is your characters name? ";

  string name, clas, race; //create strings we will need for user input
  int str, con, dex, intel, wis, cha, lvl, atWillA, atWillB, atWillC, encounter, daily; //create ints to store input
  bool roleChosen=false;
  getline(cin, name);
  cout << "Really? Okay! What is your class (enter all lowercase) ";
  getline(cin,clas); //get user input
  UPPERCASE(clas);
   while (roleChosen==false)
   {
    Hero sp;
    if (clas == "CLERIC"){
     cout <<"As a cleric you are the pious backbone of the party, \n"
          <<"smiting undead and healing your allies. If playing a \n"
          <<"man of the faith who leads his men to victory with a \n"
          <<"mace in one hand and a holy symbol in the other, than \n"
          <<"the Cleric is the class for you.";

     cout <<"As a ranger, you get a couple of key class features:(Enter to continue)\n";
     cin.get();

     sp.showSpecials("Cleric.txt", 5);

     cout <<"Do you want to play a ranger? <y/n>\n";
     char decision;
     cin >> decision;
     if (decision=='y')
     {
      cout <<"Sounds good!";
      roleChosen=true;
     } else if (decision =='n'){
      cout <<"Thats too bad :(" <<endl
           <<"What class would you like to play:";
      getline(cin, clas);
     }

    } else if (clas== "FIGHTER"){
      cout <<"flavortext";

      cout <<"As a fighter, you get a couple of key class features:(Enter to continue)\n";
      cin.get();

      sp.showSpecials("Fighter.txt", 3);

      cout <<"Do you want to play a fighter? <y/n>\n";
      char decision;
      cin >> decision;
      if (decision=='y')
      {
        int stance;
        cout <<"Sounds good! Would you like to be a Fighter that\n"
             <<"wields a one-handed weapon or a two-handed weapon?\n"
             <<"When using a weapon of your chosen style, you gain\n"
             <<"a +1 bonus to attack rolls.";
        cin >> stance;
        roleChosen=true;
      } else if (decision=='n')
      {
        cout <<"Thats too bad :(\n"
             <<"What class would you like to play?";
        getline(cin, clas);  
      }

    } else if(clas == "PALADIN"){
      cout <<"Flaborbext";

      cout <<"As a paladin, you get a couple of key class features:(Enter to continue)\n";
      cin.get();

      sp.showSpecials("Paladin.txt", 4);

      cout <<"Do you want to play a paladin? <y/n>\n";
      char decision;
      cin >> decision;
      if (decision=='y')
      {
        cout <<"Sounds good!";
        roleChosen=true;
      } else if (decision=='n')
      {
        cout <<"Thats too bad :(\n"
             <<"What class would you like to play?";
        getline(cin, clas);
      }

    } else if (clas == "RANGER"){     
     cout <<"As a ranger you are the watchful warrior in the back\n"
          <<"of the party, always on the lookout. If playing as a\n"
          <<"keen eyed huntsman who is attuned with nature, and can\n"
          <<"snipe someone down from great distances with a longbow\n"
          <<"or bring enemies down with a flurry of strikes from your\n"
          <<"twin blades sound good to you, than the Ranger is the \nclass for you.\n";

     cout <<"As a ranger, you get a couple of key class features:(Enter to continue)\n";
     cin.get();

     sp.showSpecials("Ranger.txt", 2);

     cout <<"Do you want to play a ranger? <y/n>\n";
     char decision;
     cin >> decision;
     if (decision=='y')
     {
        int stance;
        cout <<"Sounds good! Would you like to be a Ranger that\n"
             <<"wields a bow, and get access to Defensive Mobility\n"
             <<"as a feat? Or would you like the take on your enemies\n"
             <<"with two swords, and gain Toughness as a bonus feight?";
        cin >> stance;
        roleChosen=true;
     } else if (decision =='n')
     {
        cout <<"Thats too bad :(\n"
             <<"What class would you like to play?";
        getline(cin, clas);
     } 
     } else if (clas == "ROGUE"){
      cout <<"favorsex";

      cout <<"As a rogue, you get a couple of key class features:(Enter to continue)\n";
      cin.get();

      sp.showSpecials("Rogue.txt", 4);

      cout <<"Do you want to play a rogue? <y/n>\n";
      char decision;
      cin >> decision;
      if (decision=='y')
      {
        int stance;
        cout <<"Choose one of the following options:"
             <<"Artful Dodger: You gain a bonus to AC equal to\n"
             <<"your Charisma modifier against opportunity attacks.\n"
             <<"Brutal Scoundrel: You gain a bonus to Sneak Attack\n"
             <<"damage equal to your Strength modifier.";
        cin >> stance;
        roleChosen=true;
      } else if (decision=='n')
      {
        cout <<"Thats too bad :(\n"
             <<"What class would you like to play?";
        getline(cin, clas);
      }

     } else if (clas == "WARLOCK"){
      cout <<"faivorwest";
      roleChosen=true;

     } else if (clas =="WARLORD"){
      cout <<"babortets";

      cout <<"As a warlord, you get a couple of key class features:(Enter to continue)\n";
      cin.get();

      sp.showSpecials("Warlord.txt", 3);

      cout <<"Do you want to play a warlord? <y/n>\n";
      char decision;
      cin >> decision;
      if (decision=='y')
      {
        int stance;
        cout <<"Choose one of the following options:\n"
             <<"1. Inspiring Presence: When an ally who can see\n"
             <<"you spends an action point to take an extra action,\n"
             <<"that ally also regains lost hit points equal to one-\n"
             <<"half  your level + your Charisma modifier.\n"
             <<"2. Tactical Presence: When an ally you can see spends an\n"
             <<"action point to make an extra attack, the ally gains a\n"
             <<"bonus to the attack roll equal to one-half your\n"
             <<"Intelligence modifier.";
        cin >> stance;
        roleChosen=true;
      } else if (decision=='n')
      {
        cout <<"Thats too bad :(\n"
             <<"What class would you like to play?";
        getline(cin, clas);
      }

     } else if (clas =="WIZARD"){
      cout <<"wapwrpowestse";

      cout <<"As a wizard, you get a couple of key class features:(Enter to continue)\n";
      cin.get();

      sp.showSpecials("Wizard.txt", 7);

      cout <<"Do you want to play a wizard? <y/n>\n";
      char decision;
      cin >> decision;
      if (decision=='y')
      {
        int stance;
        cout <<"Choose one of the following options:"
             <<"Orb of Imposition: ayy\n"
             <<"Wand of Accuracy: Ayy";
        cin >> stance;
        roleChosen=true;
      } else if (decision=='n')
      {
        cout <<"Thats too bad :(\n"
             <<"What class would you like to play?";
        getline(cin, clas);
      }
      } else {
        cout <<"Thats not a valid class.\n"
             <<"Please enter a valid class: ";
        getline (cin, clas);
        UPPERCASE(clas);
      }
    }
  cout <<"Now it's time for the ability scores\n"
       << "Please enter your str: ";
  cin >> str;
  cout <<"Enter your con: ";
  cin >> con;
  cout <<"Enter your dex: ";
  cin >> dex;
  cout <<"Enter your int: "; 
  cin >>intel;
  cout <<"Enter your wis: ";
  cin >> wis;
  cout <<"Enter your cha: ";
  cin >> cha;
  cout <<"Enter your level: ";
  cin >> lvl;

  Hero main(str, con, dex, intel, wis, cha, lvl, name, clas, race);

  cout <<main.getStr();

  cout << "Thats great! What about your race though? (i don't see color)";
  cin.ignore();
  getline(cin,race);

    cout << "I met a " << race << " who was a real jerk, but I'm sure you"
       << "'ll be cool\n";
  UPPERCASE(race);
  string preferance; //this is to store the stat buff they'd like
  bool humanC; //to test if they get extra at will
  bool raceChosen=false;
  bool addStat=false;
  while (raceChosen==false)
  {
    if (race=="DRAGONBORN") {         //checking what race the user put in and then changes relevant stats
      cout << "As a Dragonborn, you get +2 charisma and +2 strength or "
           << "constitution, which of the last two would you prefer?\n";


      getline(cin,preferance);
      UPPERCASE(preferance);
      main.addCha(2);
      while(addStat==false)
      {
        if (preferance == "STRENGTH" || preferance == "STR")
        {
            main.addStr(2);
            addStat=true;
        }
        else if (preferance == "CONSTITUTION" || preferance == "CON")
        {
            main.addCon(2);
            addStat=true;
        }else{
          cout <<"That's not one of the 2 stats. Please pick one\n"
               <<"of the two stats: ";
          getline(cin,preferance);
          UPPERCASE(preferance);
        }    
      }
      main.addHistory(2);
      main.addIntimidate(2);
      main.setSpeed(6);
      humanC=false;
      main.setVision("Normal");
      raceChosen=true;
  } else if(race=="DWARF") {
      main.addCon(2);
      cout << "As a Dwarf, you get +2 constitution and +2 strength or "
           << "wisdom, which of the last two would you prefer?\n";

      getline(cin,preferance);
      UPPERCASE(preferance);
      while(addStat==false)
      {
        if (preferance == "STRENGTH" || preferance == "STR")
        {
            main.addStr(2);
            addStat=true;
        }
        else if (preferance == "WISDOM" || preferance == "WIS")
        {
            main.addWis(2);
            addStat=true;
        }else{
          cout <<"That's not one of the 2 stats. Please pick one\n"
               <<"of the two stats: ";
          getline(cin,preferance);
          UPPERCASE(preferance);
        }    
      }
      main.addDungeoneering(2);
      main.addEndurance(2);
      main.setSpeed(5);
      humanC=false;
      raceChosen=true;
      main.setVision("Low-Light");
  } else if (race=="ELADRIN") {
      cout << "As a Eladrin, you get +2 intelligence and +2 dexterity or "
           << "charisma, which of the last two would you prefer?\n";

      getline(cin,preferance);
      main.addIntel(2);
      UPPERCASE(preferance);
      while(addStat==false)
      {
        if (preferance == "DEXTERITY" || preferance == "DEX"){
            main.addDex(2);
            addStat=true;
        } else if (preferance == "CHARISMA" || preferance == "CHA"){
            main.addCha(2);
            addStat=true;
        } else {
          cout <<"That's not one of the 2 stats. Please pick one\n"
               <<"of the two stats: ";
          getline(cin,preferance);
          UPPERCASE(preferance);
        }    
      }
      main.addArcana(2);
      main.addHistory(2);
      main.setSpeed(6);
      humanC=false;
      raceChosen=true;
      main.setVision("Low-Light");
  } else if (race=="ELF") {
      cout << "As a Elf, you get +2 dexterity and +2 intelligence or "
           << "wisdom, which of the last two would you prefer?\n";

      getline(cin,preferance);
      main.addDex(2);
      UPPERCASE(preferance);
      while(addStat==false)
      {
        if (preferance == "INTELLIGENCE" || preferance == "INTEL"){
            main.addInt(2);
            addStat=true;
        } else if (preferance == "WISDOM" || preferance == "WIS"){
            main.addWis(2);
            addStat=true;
        } else {
          cout <<"That's not one of the 2 stats. Please pick one\n"
               <<"of the two stats: ";
          getline(cin,preferance);
          UPPERCASE(preferance);
        }    
      }
      main.addNature(2);
      main.addPerception(2);
      main.setSpeed(7);
      humanC=false;
      raceChosen=true;
      main.setVision("Low-Light");
  } else if (race=="HALF ELF" || race=="HALF-ELF") {

      cout << "As a Half-elf, you get +2 constitution and +2 wisdom or "
           << "charisma, which of the last two would you prefer?\n";

      getline(cin,preferance);
      main.addCon(2);
      UPPERCASE(preferance);
      while(addStat==false)
      {
        if (preferance == "CHARISMA" || preferance == "CHA"){
            main.addCha(2);
            addStat=true;
        } else if (preferance == "WISDOM" || preferance == "WIS"){
            main.addWis(2);
            addStat=true;
        } else {
          cout <<"That's not one of the 2 stats. Please pick one\n"
               <<"of the two stats: ";
          getline(cin,preferance);
          UPPERCASE(preferance);
        }    
      }
      main.addDiplomacy(2);
      main.addInsight(2);
      main.setSpeed(6);
      humanC=false;
      roleChosen=true;
      main.setVision("Low-Light");
  } else if (race=="HALFLING") {

      cout << "As a Halfling, you get +2 dexterity and +2 constitution or "
           << "charisma, which of the last two would you prefer?\n";

      getline(cin,preferance);
      main.addDex(2);
      UPPERCASE(preferance);
      while(addStat==false)
      {
        if (preferance == "CHARISMA" || preferance == "CHA")
        {
            main.addCha(2);
            addStat=true;
        } else if (preferance == "CONSTITUTION" || preferance == "CON") {
            main.addCon(2);
            addStat=true;
        } else {
          cout <<"That's not one of the 2 stats. Please pick one\n"
               <<"of the two stats: ";
          getline(cin,preferance);
          UPPERCASE(preferance);
        }    
      }
      main.addAcrobatics(2);
      main.addThievery(2);
      main.setSpeed(6);
      humanC=false;
      roleChosen=true;
      main.setVision("Normal");
  } else if (race=="HUMAN") {
      cout <<"Choose the ability score that you want to increase by 2: ";
      string humanstat;  //gets user input for the humans special snowflake shit
      getline (cin, humanstat);
      UPPERCASE(humanstat);
      while(addStat==false)
      {
        if (humanstat=="STR" ||humanstat=="STRENGTH") {                  //then use else if to test the string to see what
          main.addStr(2);
          addStat=true;                       //stat the user inputted and then changes it.
        } else if (humanstat=="CON" || humanstat =="CONSTITUTION"){
          main.addCon(2);
          addStat=true;
        } else if (humanstat=="DEX" || humanstat == "DEXTERITY"){
          main.addDex(2);
          addStat=true;
        } else if (humanstat=="INTEL" || humanstat == "INTELLIGENCE"){
          main.addIntel(2);
          addStat=true;
        } else if (humanstat=="WIS" || humanstat == "WISDOM"){
          main.addWis(2);
          addStat=true;
        }else if (humanstat=="CHA" || humanstat == "CHARISMA"){
          main.addCha(2);
          addStat=true;
        } else {
          cout <<"Thats not one of the stats you can pick.\n"
               <<"Please enter a valid stat: "
          getline (cin, humanstat);
          UPPERCASE(humanstat);
        }
      }  
      humanC=true;
      roleChosen=true;
      main.addFort(1);
      main.addReflex(1);
      main.addWill(1);
      main.setSpeed(6);
      main.setVision("Normal");

      cout << "As a human you the choice of an extra at will power of the "
           << "ability, Heroic Effort. Which would you prefer?\n"
           << "Enter 1 for at will, 0 for ability ";
      int humandecision;     
      cin >> humandecision;
  } else if (race=="TIEFLING") {

      cout << "As a Tiefling, you get +2 charisma and +2 constitution or "
           << "intelligence, which of the last two would you prefer?\n";

      getline(cin,preferance);
      UPPERCASE(preferance)
      main.addCha(2);
      while (addStat==false)
      {
        if (preferance == "CONSTITUTION" || preferance =="CON"){
            main.addCon(2);
            addStat=true;
        } else if (preferance == "INTELLIGENCE" || preferance == "INTEL") {
            main.addIntel(2);
            addStat=true;
        } else {
          cout <<"That's not one of the 2 stats. Please pick one\n"
               <<"of the two stats: ";
          getline(cin,preferance);
          UPPERCASE(preferance);
        }
      }
      main.addBluff(2);
      main.addStealth(2);
      main.setSpeed(6);
      humanC=false;
      roleChosen=true;
      main.setVision("Low-Light");
    } else
    {
      cout <<"Thats not a valid race.\n"
           <<"Please enter a valid race: ";
      getline(cin, race);
      UPPERCASE(race);
    }
  }


  //it is very important this information is saved in these
  //because depending on user choice different parts will be
  //output to a file when the program is done running

  //make sure to ask what skills they want to be trained in
  //and what type of class they will be, as well other optional
  //things

  if (clas == "CLERIC") {
    main.addWill(2);
    main.setHealth(12, main.getConMod());
    main.setSurges(7, main.getConMod());
    main.showAtWills("Cleric.txt", 49, 4);
    cout << "Here are your at wills please pick two by typing in the "
         << "corresponding numbers ";
    cin >> atWillA >> atWillB; //get user input that we will need to
    //output this info to a file later
    if (humanC==1)
    {
      cout << "Oh sorry, I forgot that you're a human, pick one more ";
      cin >> atWillC;
    }
    main.showEncounters("Cleric.txt", 91, 4);
    cout << "Okay, now time to pick one encounter power ";
    cin >> encounter;
    main.showDailies("Cleric.txt", 128, 4);
    cout << "And finally pick your daily ";
    cin >> daily;

} else if (clas =="FIGHTER") {
    main.addFort(2);
    main.setHealth(15, main.getConMod());
    main.setSurges(9, main.getConMod());
    main.showAtWills("Fighter.txt", 20, 4);
    cout << "Here are your at wills please pick two by typing in the "
         << "corresponding numbers ";
    cin >> atWillA >> atWillB; //get user input that we will need to
    //output this info to a file later
    if (humanC==1)
    {
      cout << "Oh sorry, I forgot that you're a human, pick one more ";
      cin >> atWillC;
    }
    main.showEncounters("Fighter.txt", 59, 4);
    cout << "Okay, now time to pick one encounter power ";
    cin >> encounter;
    main.showDailies("Fighter.txt", 94, 3);
    cout << "And finally pick your daily ";
    cin >> daily;
 } else if (clas =="PALADIN") {
    main.addFort(1);
    main.addReflex(1);
    main.addWill(1);
    main.setHealth(15, main.getConMod());
    main.setSurges(10, main.getConMod());
    main.showAtWills("Paladin.txt", 55, 4);
     cout << "Here are your at wills please pick two by typing in the "
          << "corresponding numbers ";
     cin >> atWillA >> atWillB; //get user input that we will need to
     //output this info to a file later
     if (humanC==1)
     {
       cout << "Oh sorry, I forgot that you're a human, pick one more ";
       cin >> atWillC;
     }
    main.showEncounters("Paladin.txt", 92, 4);

     cout << "Okay, now time to pick one encounter power ";
     cin >> encounter;

    main.showDailies("Paladin.txt", 128, 3);

    cout << "And finally pick your daily ";
    cin >> daily;
} else if (clas =="RANGER") {
    main.addFort(1);
    main.addReflex(1);
    main.setHealth(12, main.getConMod());
    main.setSurges(6, main.getConMod());
    main.showAtWills("Ranger.txt", 29, 4);
     cout << "Here are your at wills please pick two by typing in the "
          << "corresponding numbers ";
     cin >> atWillA >> atWillB; //get user input that we will need to
     //output this info to a file later
     if (humanC==1)
     {
       cout << "Oh sorry, I forgot that you're a human, pick one more ";
       cin >> atWillC;
     }
    main.showEncounters("Ranger.txt", 72, 4);

     cout << "Okay, now time to pick one encounter power ";
     cin >> encounter;

    main.showDailies("Ranger.txt", 111, 3);

    cout << "And finally pick your daily ";
    cin >> daily;
} else if (clas =="ROGUE") {
    main.addReflex(2);
    main.setHealth(12, main.getConMod());
    main.setSurges(6, main.getConMod());
    main.showAtWills("Rogue.txt", 26, 4);
     cout << "Here are your at wills please pick two by typing in the "
          << "corresponding numbers ";
     cin >> atWillA >> atWillB; //get user input that we will need to
     //output this info to a file later
     if (humanC==1)
     {
       cout << "Oh sorry, I forgot that you're a human, pick one more ";
       cin >> atWillC;
     }
    main.showEncounters("Rogue.txt", 72, 4);

    cout << "Okay, now time to pick one encounter power ";
    cin >> encounter;

    main.showDailies("Rogue.txt", 112, 3);

    cout << "And finally pick your daily ";
    cin >> daily;


 } else if (clas =="WARLOCK") {
    main.addReflex(1);
    main.addWill(1);
    main.setHealth(12, main.getConMod());
    main.setSurges(6, main.getConMod());
    atWillA=1;
    main.showAtWills("Warlock.txt", 46, 4);
    cout <<"Here are your at wills, you already have Eldritch Blast,"
         <<" pick one more ";
    cin >>atWillB;
    if (atWillB==1)
    {
      cout <<"You can't pick Eldritch Blast again, pick another power ";
      cin >>atWillB;
    }
    if (humanC==1)
    {
      cout <<"Oh sorry, I forgot that you're a human, pick one more ";
      cin >> atWillC;
    }

    main.showEncounters("Warlock.txt", 100, 4);
    cout << "Okay, now time to pick one encounter power ";
    cin >> encounter;

    main.showDailies("Warlock.txt", 132, 4);
    cout <<"And finally pick your daily ";
    cin >>daily;

} else if (clas =="WARLORD") {
    main.addFort(1);
    main.addWill(1);
    main.setHealth(12, main.getConMod());
    main.setSurges(7, main.getConMod());
    main.showAtWills("Warlord.txt", 24, 4);
    cout << "Here are your at wills please pick two by typing in the "
         << "corresponding numbers ";
    cin >> atWillA >> atWillB; //get user input that we will need to
    //output this info to a file later
    if (humanC==1)
    {
      cout << "Oh sorry, I forgot that you're a human, pick one more";
      cin >> atWillC;
    }
    main.showEncounters("Warlord.txt", 65, 4);
    cout << "Okay, now time to pick one encounter power ";
    cin >> encounter;
    main.showDailies("Warlord.txt", 105, 3);
    cout << "And finally pick your daily ";
    cin >> daily;
   } else if (clas =="WIZARD") {
    main.addWill(2);
    main.setHealth(10, main.getConMod());
    main.setSurges(6, main.getConMod());
    main.showAtWills("Wizard.txt", 129, 5);
    cout << "Here are your at wills please pick two by typing in the "
        << "corresponding numbers ";
    cin >> atWillA >> atWillB; //get user input that we will need to
    //output this info to a file later
    if (humanC==1)
    {
      cout << "Oh sorry, I forgot that you're a human, pick one more";
      cin >> atWillC;
    }
    main.showEncounters("Wizard.txt", 183, 5);
    cout << "Okay, now time to pick one encounter power ";
    cin >> encounter;
    main.showDailies("Wizard.txt", 228, 4);
    cout << "And finally pick your daily ";
    cin >> daily;
  }

  //this creates a hero class, we pass it the values entered for its
  //constructor so it may initialize all of the skills

  //pass the name and class etc to the class
  cout <<"Name: " << name << "        Class: " << clas;
  cout <<"\nRace: " << race;
  cout << "\nThese are your stats:\n" <<"Str: " << main.getStr(); // this is a test
  cout <<"\nCon: " <<main.getCon() <<"\nDex: " <<main.getDex();
  cout <<"\nInt: " <<main.getIntel() <<"\nWis: " <<main.getWis();
  cout <<"\nCha: " <<main.getCha();
  cout <<"\nThis is your speed: " <<main.getSpeed();
  cout <<"\nThis is your strength mod: " <<main.getStrMod();
  cout <<"\nThis is your constitution mod: " <<main.getConMod();
  cout <<"\nThis is your dexterity mod: " <<main.getDexMod();
  cout <<"\nThis is your intelligence mod: " <<main.getIntelMod();
  cout <<"\nThis is your wisdom mod: " <<main.getWisMod();
  cout <<"\nThis is your charisma mod: " <<main.getChaMod();
  cout <<"\nThis is your acrobatics mod: " <<main.getAcrobatics();
  cout <<"\nThis is your thievery mod: " <<main.getThievery();
  cout <<"\nThis is your fortitude: " <<main.getFort();
  cout <<"\nThis is your will: " <<main.getWill();
  cout <<"\nThis is your health: " <<main.getHealth();
  cout <<"\nThese are your healing surges: " <<main.getSurges();
  main.setGold(100);
  cout << "\n" << main.getGold();
  cout << "\n" << main.getDaily(daily) <<endl; 
  cout <<"\n" << main.getatWill(atWillA) <<endl;
  cout <<"\n" << main.getatWill(atWillB) <<endl; 
  //now we need to have a series of if / else checking what their
  //class is and comparing that to the character, also race

  //then we check what their gear will be, if they get a background
  //and flavor info like gender, height, age, etc
  return 0;
}

void UPPERCASE(string &s)
{
  for (int i=0; i<s.length(); ++i)
    s[i] = toupper(s[i]);

}
