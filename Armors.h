//mocking up armors
#ifndef ARMORS_H
#define ARMORS_H
#include <string>

struct armor {
	std::string name;
	std::string type;
	int bonus;
	int enhancmentbonus;
	int check;
	int speed;
	int price;
	int weight;
};
armor Cloth =
{
	"Cloth Armor",
	"Light",
	0,
	0,
	0,
	0,
	1,
	4,
};

armor Leather = 
{
	"Leather Armor",
	"Light",
	2,
	0,
	0,
	0,
	25,
	15,
};

armor Hide = 
{
	"Hide Armor",
	"Light",
	3,
	0,
	-1,
	0,
	30,
	25,
};

armor Chainmail = 
{
	"Chainmail",
	"Heavy",
	6,
	0,
	-1,
	-1,
	40,
	40,
};

armor Scale =
{
	"Scale Armor",
	"Heavy",
	7,
	0,
	0,
	-1,
	45,
	45,
};

armor Plate = 
{
	"Plate Armor",
	"Heavy",
	8,
	0,
	-2,
	-1,
	50,
	50,
};

armor lShield =
{
	"Light Shield",
	"Light",
	1,
	0,
	0,
	0,
	5,
	6,
};

armor hShield =
{
	"Heavy Shield",
	"Heavy",
	2,
	0
	-2,
	0,
	10,
	15,
};


#endif