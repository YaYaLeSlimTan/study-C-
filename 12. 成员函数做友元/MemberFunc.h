#pragma once

class Building;

class GoodGay {
public:
	Building* building;
	GoodGay();
	void visit1();
	void visit2();
	
};

class Building {
	friend void GoodGay::visit1();
public:
	Building();
	const char* m_SittingRoom;
private:
	const char* m_BedRoom;
};