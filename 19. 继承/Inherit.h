#pragma once
#include <iostream>
using namespace std;


class BasePage {
public:
	void header() {
		cout << "公共头部" << endl;
	}

	void footer() {
		cout << "公共底部" << endl;
	}

	void left() {
		cout << "公共分类列别" << endl;
	}
};

class Java :public BasePage {
public:
	void content() {
		cout << "Java学科视频" << endl;
	}
};

class Python :public BasePage {
public:
	void content() {
		cout << "Python学科视频" << endl;
	}
};

class CPP :public BasePage {
public:
	void content() {
		cout << "C++学科视频" << endl;
	}
};