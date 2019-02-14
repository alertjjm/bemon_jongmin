
// 16.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
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
	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a += 500; // 책 a의 가격 500원 증가
	b -= 500; // 책 b의 가격 500원 감소
	a.show();
	b.show();

    return 0;
}

