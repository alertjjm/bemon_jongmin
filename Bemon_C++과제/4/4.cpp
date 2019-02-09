// 4.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
		cout << d_year << "년 " << d_month << "월 " << d_day << "일 " << endl;
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
	Date birth(2014, 3, 20); // 2014년 3월 20일
	Date independenceDay("1945/8/15"); // 1945년 8월 15일
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
    return 0;
}

