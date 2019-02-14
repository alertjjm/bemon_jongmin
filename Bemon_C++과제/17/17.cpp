// 17.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
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
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl; // price 비교
	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl; // 책 title 비교
	if (a == b) cout << "두 책이 같은 책입니다." << endl; // title, price, pages 모두 비교 
    return 0;
}

