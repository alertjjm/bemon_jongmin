// 17.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<string>
#include<iostream>
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
	bool operator==(int a) {
		if (price == a)
			return true;
		else
			return false;
	}
	bool operator==(string a) {
		if (title == a)
			return true;
		else
			return false;
	}
	bool operator==(Book a) {
		int index = 0;
		if (a.price == price)
			index++;
		if (a.pages == pages)
			index++;
		if (a.title == title)
			index++;
		if (index == 3)
			return true;
		else
			return false;
	}
	string getTitle() { return title; }
};


int main()
{
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if (a == 30000) cout << "���� 30000��" << endl; // price ��
	if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl; // å title ��
	if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl; // title, price, pages ��� �� 
    return 0;
}

