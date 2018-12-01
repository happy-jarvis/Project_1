#pragma once

#include "header.h"
#include "worker.h"

class List
{
private:
	Worker *arr;
	int length;
public:
	List();
	void set(int length);
	void get(int ID);
	void fill(string name, string post, int year, int ID);
};