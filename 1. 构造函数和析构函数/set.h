#pragma once
#include "stdio.h"

class person {
public:
	int age;
public:
	person();
	person(int a);
	person(const person& c);
	~person();
};