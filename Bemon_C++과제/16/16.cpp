
// 16.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <string>
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
	Book operator+=(int a) {
		price += a;
		return *this;
	}
	Book operator-=(int a) {
		price -= a;
		return *this;
	}
	string getTitle() { return title; }
};

int main()
{
	Book a("û��", 20000, 300), b("�̷�", 30000, 500);
	a += 500; // å a�� ���� 500�� ����
	b -= 500; // å b�� ���� 500�� ����
	a.show();
	b.show();

    return 0;
}

