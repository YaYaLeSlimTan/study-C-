#pragma once
#include <iostream>
using namespace std;


class BasePage {
public:
	void header() {
		cout << "����ͷ��" << endl;
	}

	void footer() {
		cout << "�����ײ�" << endl;
	}

	void left() {
		cout << "���������б�" << endl;
	}
};

class Java :public BasePage {
public:
	void content() {
		cout << "Javaѧ����Ƶ" << endl;
	}
};

class Python :public BasePage {
public:
	void content() {
		cout << "Pythonѧ����Ƶ" << endl;
	}
};

class CPP :public BasePage {
public:
	void content() {
		cout << "C++ѧ����Ƶ" << endl;
	}
};