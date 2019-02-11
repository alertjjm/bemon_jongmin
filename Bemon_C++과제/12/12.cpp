// 12.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


class Buffer {
	string text;
public:
	Buffer(string text) { this->text = text; }
	void add(string next) {
		text += next; // text에 next 문자열 덧붙이기 
	}
	void print() {
		cout << text << endl;
	}
};
Buffer& append(Buffer &str, string a) {
	str.add(a);
	return str;
}

int main()
{
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys"); // buf의 문자열에 "Guys" 덧붙임
	temp.print(); // "HelloGuys" 출력
	buf.print();  // "HelloGuys" 출력
    return 0;
}

