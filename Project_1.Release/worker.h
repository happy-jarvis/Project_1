#pragma once

#include "header.h"

class Worker
{
private:
	string name;
	string post;
	int year;
public:
	void set(string name, string post, int year);
	void get(int ID);
};