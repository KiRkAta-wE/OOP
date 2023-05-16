#include "User.h"
#include "PremiumUser.h"
#include <iostream>
using namespace std;

int main()
{
	User a("kris", "a099s82qd"), b("qdini", "219jfdchs");
	PremiumUser c("vkushi", "0sad0s", "fnaojdisa", "1.23.10");
	c.print();
}