#pragma once
#include "User.h"
#include <string>

class PremiumUser : public User
{
private:
	string premiumplan;
	string date;
public:
	PremiumUser(const char* name, const char* password, const char* plan, const char* date);
	void print();
};

