#pragma once
#include<vector>
#include"Room.h"
using namespace std;

class Cinema
{
	vector<Room>rooms;
	double balanc;
	vector<Client>clients;
	vector<worker>workers;
	Timetable timtable;
};

