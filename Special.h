#ifndef SPECIAL_H
#define SPECIAL_H
#include <fstream>
#include <iostream>
#include <string>

namespace Special 
{
    void showSpecials (std::string p, int z)
    {

   	  Hero main();
      std::ifstream file;
      file.open(p, std::ios::in);

      for ( int x = 0; x < z; x++) //there are only 3 rogue dailies
      { 
        while (true)
        {
          getline (file, test); //get a line from the file store it in test
          if (test == "NULL\r")
            test.pop_back();
          if (test == "NULL")
            break;
          main.setSpecial("\n", x); //add newline character to whole
          main.setSpecial(test, x); //add test to whole
        }
        std::cout << x + 1 << ". " << main.getSpecial(x+1) << std::endl << std::endl;
      }
    file.close();
    }
};

#endif