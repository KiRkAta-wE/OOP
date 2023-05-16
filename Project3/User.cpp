#include "User.h"
#include <iostream>
using namespace std;

int User::counter = 0;

void User::DeformPass()
{
	int n = password.length();
	for (int i = 0; i < n; i++) {
		if (password[i] != '0') password[i]--;
		else password[i] = '?';
	}
}
User::User(const char* name, const char* password) : name(name), password(password), id(counter)
{
	counter++;
	DeformPass();
}

