#pragma once
struct Inventory
{
	int SweetProducts;
	int SaltProducts;
	int Drinks;
}; 
class Vending
{
private:
	int ID;
	char* address;
	Inventory inventory;	
Public:
	Vending();
	Vending(char* ID, int swpr, int saltpr, int drinks);
	~Vending();
};
