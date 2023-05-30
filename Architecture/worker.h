#pragma once
#include"Movie.h"
#include"Person.h"

class worker : Person
{
	double salary;
	void addMovie(const Movie& movie);
	void addScreening;
	void buyTicket(Screening*);
};

