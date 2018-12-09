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
	~List();
	void set(int length);
	void get(int ID);
	void create_worker();
	void fill(string name, string post, int year, int ID);
	void sorting();
	void swap(Worker& object_1, Worker& object_2);
	void operator+=(Worker& object);
};