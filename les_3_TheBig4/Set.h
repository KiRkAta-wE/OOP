#pragma once
class Set
{
private:
	int* elements;
	int numElements;
	int capacity;
	void copy(Set const& other);
public:
	Set();
	Set(Set const& other);
	Set& operator= (Set const& other);
	~Set();

	bool addElement(const int element);
	bool deleteElement(const int element);
	void print();
	void setUnion(const Set other);
	voit setIntersection(const Set other);
};
