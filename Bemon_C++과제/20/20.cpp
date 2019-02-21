// 20.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

class Point {
	int x, y;
public:
	Point(int x, int y) { this->x = x; this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};
class ColorPoint : public Point {
	string color;
public:
	ColorPoint(int a, int b, string c):Point(a,b){
		color = c;
	}
	void setPoint(int a, int b) {
		move(a, b);
	}
	void setColor(string cl) {
		color=cl;
	}
	void show() {
		cout << "x��ǥ: " << getX() << " " << "y��ǥ: " << getY() << endl;
		cout << "����: " << color << endl;
	}


};

int main()
{
	ColorPoint cp(5, 5, "RED");
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();

    return 0;
}

