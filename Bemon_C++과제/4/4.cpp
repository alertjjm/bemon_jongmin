// 4.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

class Date {
public:
	Date(){}
	Date(int year, int month, int day){
		d_year = year;
		d_month = month;
		d_day = day;
	}
	Date(string s) {
		char str[15];
		char* temp;
		strcpy(str, s.c_str());
		d_year = stoi(strtok(str, "/"));	
		d_month = stoi(strtok(NULL, "/"));
		d_day = stoi(strtok(NULL, "/"));
	}
	~Date(){}
	void show() {
		cout << d_year << "�� " << d_month << "�� " << d_day << "�� " << endl;
	}
	int getYear() {
		return d_year;
	}
	int getMonth() {
		return d_month;
	}
	int getDay() {
		return d_day;
	}
private:
	int d_year;
	int d_month;
	int d_day;

};

int _tmain(int argc, _TCHAR* argv[])
{
	Date birth(2014, 3, 20); // 2014�� 3�� 20��
	Date independenceDay("1945/8/15"); // 1945�� 8�� 15��
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
    return 0;
}

