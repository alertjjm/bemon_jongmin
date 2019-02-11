// 9.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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
	Person* p; // Person �迭 ������
	int size; // Person �迭�� ũ��. ���� ������ ��
	string famname;
public:
	Family(string name, int s) {
		size = s;
		famname = name;
		p = new Person [size];
	}; // size ������ŭ Person �迭 ���� ����
	void show() {
		cout << famname <<" ������ ������ ���� " << size << "���Դϴ�." << endl;
		for (int i = 0; i < size; i++) {
			cout << p[i].getName();
			cout << "\t";
		}
		cout<<endl;
	}; // ��� ���� ������ ���
	void setName(int n, string str) {
		p[n].setName(str);
	}
	~Family() { delete[] p; };
};


int main()
{
	Family *simpson = new Family("Simpson", 3); // 3������ ������ Simpson ����
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;

    return 0;
}

