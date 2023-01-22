#pragma once

class Animal {
public:
	int m_Age;
};

class Sheet :public Animal {

};

class Tuo :public Animal {

};

class SheetTuo :public Sheet,public Tuo {

};

