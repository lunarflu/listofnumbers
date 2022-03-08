#include "ListOfNumbers.h"


ListOfNumbers::ListOfNumbers()
{
	number = 0;
	next = NULL;
}

ListOfNumbers::ListOfNumbers(int v)
{
	number = v;
	next = NULL;
}

void ListOfNumbers::SetValue(int v)
{
	number = v;
}

void ListOfNumbers::SetNext(ListOfNumbers* n)
{
	next = n;
}

// Prints a single item’s number
void ListOfNumbers::PrintItem()
{
	std::cout << "Number = " << number << "      [" << this << " ; " << next << "]" << std::endl;
}

// Prints the whole list
void ListOfNumbers::PrintList()
{
	ListOfNumbers* current = this;

	while (current != NULL)
	{
		std::cout << current->number << "      [" << current << "]" << std::endl;
		current = current->next;
	}

}


std::ostream& operator<<(std::ostream& out, const ListOfNumbers& a)
{
	out << "List of Numbers value = " << a.number;
	return out;
}


void ListOfNumbers::Add(ListOfNumbers* n)
{
	ListOfNumbers* current = this;

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = n;
}


void ListOfNumbers::Add(int v)
{
	ListOfNumbers* temp = new ListOfNumbers(v);

	Add(temp);
}




void ListOfNumbers::AddR(ListOfNumbers* n)
{
	if (next == NULL)
		next = n;
	else
		next->AddR(n);
}


void ListOfNumbers::AddR(int v)
{
	ListOfNumbers* temp = new ListOfNumbers(v);

	AddR(temp);
}






