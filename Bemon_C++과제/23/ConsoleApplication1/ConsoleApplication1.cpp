// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

class Person {
	int id;
public:
	Person(int id = 0) { this->id = id; }
	~Person() { cout << "id=" << id << endl; }

};
class Student : public Person {
	char * name;
public:
	Student(int id, const char *name) : Person(id) {
		int len = strlen(name);
		this->name = new char[len + 1];
		strcpy(this->name, name);
	}
	~Student() {
		cout << "name=" << name << endl;
		delete[] name;
	}
};


int main()
{
	Person *p = new Student(10, "손연재");
	delete p;
    return 0;
}

