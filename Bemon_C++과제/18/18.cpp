// 18.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; 	this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}
	bool operator! () {
		if (price == 0)
			return true;
		else
			return false;
	}
	string getTitle() { return title; }
};


int main()
{
	Book book("�������", 0, 50); // ������ 0
	if (!book) cout << "��¥��" << endl;
    return 0;
}

