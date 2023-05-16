#include "PremiumUser.h"
#include<iostream>
using namespace std;
PremiumUser::PremiumUser(const char* name, const char* password, const char* plan, const char* date) : User(name, password), premiumplan(plan), date(date)
{
	counter++;
}

void PremiumUser::print()
{
	cout << getid() << " " << getpass() << " " << premiumplan << " " << date << endl;
}
