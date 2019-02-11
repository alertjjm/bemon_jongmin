// 9.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"	
#include<iostream>
#include<string>
using namespace std;

class Person {
	string name;
public:
	Person(){}
	Person(string name) { this->name = name; }
	string getName() { return name; }
	void setName(string name) { this->name = name; }
};

class Family {
	Person* p; // Person 배열 포인터
	int size; // Person 배열의 크기. 가족 구성원 수
	string famname;
public:
	Family(string name, int s) {
		size = s;
		famname = name;
		p = new Person [size];
	}; // size 개수만큼 Person 배열 동적 생성
	void show() {
		cout << famname <<" 가족은 다음과 같이 " << size << "명입니다." << endl;
		for (int i = 0; i < size; i++) {
			cout << p[i].getName();
			cout << "\t";
		}
		cout<<endl;
	}; // 모든 가족 구성원 출력
	void setName(int n, string str) {
		p[n].setName(str);
	}
	~Family() { delete[] p; };
};


int main()
{
	Family *simpson = new Family("Simpson", 3); // 3명으로 구성된 Simpson 가족
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;

    return 0;
}

