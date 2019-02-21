// 20.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
		cout << "x좌표: " << getX() << " " << "y좌표: " << getY() << endl;
		cout << "색깔: " << color << endl;
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

