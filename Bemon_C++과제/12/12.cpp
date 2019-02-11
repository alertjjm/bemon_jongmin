// 12.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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
		text += next; // text�� next ���ڿ� �����̱� 
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
	Buffer& temp = append(buf, "Guys"); // buf�� ���ڿ��� "Guys" ������
	temp.print(); // "HelloGuys" ���
	buf.print();  // "HelloGuys" ���
    return 0;
}

