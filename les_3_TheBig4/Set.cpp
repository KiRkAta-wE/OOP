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
void Set::print()
{
	for (int i = 0, i < numElements; i++)
	{
		std::cout << elements[i] << " ";
	}
	std::cout << std::endl;
}
void Set::copy(Set const& other)
{
	this->elements = new int[other.capacity];
	strcpy(this->elements, other.elements);
	this->capacity = other.capacity;
	this->numElements = other.numElements;
}

