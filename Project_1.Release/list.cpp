#include "list.h"

List::List()
{
	arr = nullptr;
	length = 0;;
}

void List::set(int length)
{
	this->length = length;
	arr = new Worker[this->length];
}

void List::fill(string name, string post, int year, int ID)
{
	arr[ID].set(name, post, year);
}

void List::get(int ID)
{
	arr[ID].get(ID);
}
