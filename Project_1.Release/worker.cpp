#include "worker.h"

void Worker::set(string name, string post, int year)
{
	this->name = name;
	this->post = post;
	this->year = year;
}

void Worker::get(int ID)
{
	cout << ID + 1 << TAB << name << TAB << post << TAB "\t" << year << endl;
}

string Worker::get_name()
{
	return name;
}

