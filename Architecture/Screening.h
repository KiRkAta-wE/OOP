#pragma once
#include <vector>
#include "Person.h"
#include "Movie.h"
#include "Room.h"
using namespace std;
class Screening
{
	vector<Person*>people;
	Movie* films;
	Room* room;
	double price;
};

