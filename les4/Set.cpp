#include "Set.h"
#include<iostream>

Set::Set()
{
	capacity = 10;
	elements = new int[capacity];
	numElements = 0;
	
}
Set::Set(Set const& other)
{
	this->copy(other);
}

Set& Set::operator=(Set const& other)
{
	if (this != &other) {
		this->copy(other);
	}
}
Set& Set::operator=(Set const& other)
{
	if (this != &other) {
		this->copy(other);
	}
}
Set& Set::operator+=(Set const& other)
{
	int n = this->numElements + other.numElements;
	for (int i = this->numElements; i < n; i++)
	{
		this->elements[i] = other.elements[i - this->numElements];
	}
	return *this->elements;
}

Set::~Set()
{
	delete[] this->elements;
}
bool Set::addElement(const int elements)
{
	for (int i = 0; i < numElements; i++)
	{
		if (this->elements[i] != elements) {
			this->elements[i] == elements;
			return true;
		}
	}
	return false;
}
bool Set::addElement(const int elements)
{
	for (int i = 0; i < numElements; i++)
	{
		if (this->elements[i] == elements) {
			this->elements[i] == 0;
			return true;
		}
	}
	return false;
}
void Set::print()
{
	for (int i = 0; i < numElement; i++)
	{
		std::cout << elements[i] << " ";
	}
	std::cout << std::endl;
}
void Set::setUnion(Set const& other)
{
	int h = this->capacity;
	int* cpelements = new int[h];
	for (int i = 0; i < this->numElements; i++)
	{
		cpelements[i] = this->elements[i];
	}
	~Set();
	
}
void Set::copy(Set const& other)
{
	this->elements = new int[other.capacity];
	for (int i = 0; i < other.numElements; i++)
	{
		this->elements[i] = other.elements[i];
	}
	this->capacity = other.capacity;
	this->numElements = other.numElements;
}

