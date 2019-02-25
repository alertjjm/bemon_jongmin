// 30.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Book {
public:
	int year;
	string bname;
	string author;
};

int main()
{
	vector<Book> v;
	Book temp;
	int t;
	int i = 0;
	string search;
	while (1) {
		cout << "입고할 책을 입력하시오. 년도에 -1을 입력하면 입고를 종료합니다." << endl;
		cout << "년도 >>";
		cin >> t;
		if (t == -1)
			break;
		temp.year = t;
		cout << "책이름 >>";
		cin >> temp.bname;
		cout << "저자 >>";
		cin >> temp.author;
		v.push_back(temp);
	}
	cout << "총 입고된 책은 " << v.size() << "권입니다." << endl;
	cout << "검색하고자하는 저자의 이름을 입력하시오>> ";
	cin >> search;
	for (i = 0; i < v.size(); i++)
		if (v[i].author == search) {
			cout << v[i].year << ", " << v[i].bname << ", " << v[i].author << endl;
			break;
		}
    return 0;
}

