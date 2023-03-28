#include "String.h"
#include <iostream>
#include <cstring>

String::String()
{
	str = nullptr;
}
String::String(const String& other)
{
	this->str = new char[strlen(other.str) + 1];
	strcpy(this->str, other.str);
}
String::String(const char* str)
{
	this->copy(str);
}
String& String::operator=(const String& other)
{
	if (this != &other) {
		delete[] this->str;
		this->copy(other.str);
	}
	return *this;
}
String& String::operator=(const char* str)
{
	delete[] this->str;
	this->copy(str);
	return *this;
}
String::~String()
{
	delete[]this->str;
}
void String::copy(const char* str)
{
	this->str = new char[strlen(str) + 1];
	strcpy(this->str, str);
}
void String::print()
{
	for (int i = 0; i < strlen(str); i++) {
		std::cout << str[i];
	}
	std::cout << std::endl;
}