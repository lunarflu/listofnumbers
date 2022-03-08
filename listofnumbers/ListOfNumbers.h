#include <iostream>


class ListOfNumbers {
private:
	int number;
	ListOfNumbers* next;

public:
	ListOfNumbers();
	ListOfNumbers(int v);

	void SetValue(int v);
	void SetNext(ListOfNumbers* n);

	// Prints a single item’s number
	void PrintItem();

	// Prints the whole list
	void PrintList();

	// Add a new item to the list
	void Add(ListOfNumbers* n);
	void Add(int v);
	void AddR(ListOfNumbers* n);
	void AddR(int v);




	// Overload the operator <<
	friend std::ostream& operator<<(std::ostream& out, const ListOfNumbers& a);
}; #pragma once
