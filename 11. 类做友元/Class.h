#pragma once

class Building {
	friend	class GoodGay;
public:
	Building();
	~Building();
	const char* m_SittingRoom;
	//string m_SittingRoom;
private:
	const char* m_BedRoom;
	//string m_BedRoom;
};

class GoodGay {
public:
	GoodGay();
	~GoodGay();
	Building* building;	//Building¿‡µƒ÷∏’Î
	void visit();
};
