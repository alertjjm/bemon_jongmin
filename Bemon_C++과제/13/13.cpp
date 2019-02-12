
// 13.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class Person {
	int id;
	double weight;
	string name;
public:
	Person(int a = 1, string b="Grace", double c=20.5) {
		id = a;
		name = b;
		weight = c;
	}
	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};


int main()
{
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();  // 1  20.5  Grace
	ashley.show();   // 2  20.5  Ashley
	helen.show();    // 3  32.5  Helen
    return 0;
}

