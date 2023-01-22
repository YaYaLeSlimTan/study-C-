#pragma once

class Animal {
public:
	virtual void speak();
};

class Dog :public Animal {
public:
	void speak();
};

class Cat :public Animal {
public:
	void speak();
};