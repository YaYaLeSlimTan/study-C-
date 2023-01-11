#pragma once
//#include <string>
using namespace std;

class Building {
	friend void GoodGay(Building* building);
public:
	Building();
	~Building();
	const char* m_SittingRoom;
	//string m_SittingRoom;
private:
	const char* m_BedRoom;
	//string m_BedRoom;
};