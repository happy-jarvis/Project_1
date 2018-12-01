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

void List::sorting()
{
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - i - 1; j++)
		{
			if (arr[j].get_name() > arr[j + 1].get_name())
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

void List::swap(Worker& object_1, Worker& object_2)
{
	Worker temp;

	temp = object_1;
	object_1 = object_2;
	object_2 = temp;
}

