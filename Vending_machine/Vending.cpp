#include "Vending.h"
#include<iostream>

Vending::Vending()
{
	ID = 0;
	address = nullptr;
	inventory.SweetProducts = 0;
	inventory.SaltProducts = 0;
	inventory.Drinks = 0;
}