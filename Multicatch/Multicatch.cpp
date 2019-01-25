// Multicatch.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void ExceptTest1() {
	int nInput;
	cout << "1~10 양의 정수를 입력하세요" << endl;
	cin >> nInput;
	if (nInput < 1 || nInput>10)
		throw nInput;
}
void ExceptTest2() {
	char ch;
	cout << "Menu: [A]dd\t[D]elete\t[E]xit\n" << endl;
	cin >> ch;
	if (ch!='A'&&ch!='D'&&ch!='E')
		throw ch;
}
int _tmain(int argc, _TCHAR* argv[])
{
	cout << "*****Begin*****" << endl;
	try {
		ExceptTest1();
		ExceptTest2();
	}
	catch (int nExp) {
		cout << "ERROR:" << nExp << "은 범위를 벗어난 숫자입니다." << endl;
	}
	catch (char ch) {
		cout << "ERROR:" << ch << " 알 수 없는 메뉴입니다." << endl;
	}
	cout << "*****End*****" << endl;
    return 0;
}

