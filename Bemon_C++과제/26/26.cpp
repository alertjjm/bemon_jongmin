// 26.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include<string>
using namespace std;
class Shape {
protected:
	string name; // 도형의 이름
	int width, height; // 도형이 내접하는 사각형의 너비와 높이
public:
	Shape(string n = "", int w = 0, int h = 0) { name = n; width = w; height = h; }
	virtual double getArea() { return 0; } // dummy 값 리턴
	string getName() { return name; } // 이름 리턴
};
class Oval : public Shape {
public:
	Oval(string n = "", int w = 0, int h = 0) : Shape(n, w, h) {}
	double getArea() {
		double result;
		result = 3.14*width*height/4;
		return result;
	}
};
class Rect : public Shape {
public:
	Rect(string n = "", int w = 0, int h = 0) : Shape(n, w, h) {}
	double getArea() {
		double result;
		result = width*height;
		return result;
	}
};
class Triangular : public Shape {
public:
	Triangular(string n = "", int w = 0, int h = 0) : Shape(n, w, h) {}
	double getArea() {
		double result;
		result = width*height / 2;
		return result;
	}
};
int main()
{
	Shape *p[3];
	p[0] = new Oval("빈대떡", 10, 20);
	p[1] = new Rect("찰떡", 30, 40);
	p[2] = new Triangular("토스트", 30, 40);
	for (int i = 0; i<3; i++)
		cout << p[i]->getName() << " 넓이는 " << p[i]->getArea() << endl;

	for (int i = 0; i<3; i++) delete p[i];

    return 0;
}

