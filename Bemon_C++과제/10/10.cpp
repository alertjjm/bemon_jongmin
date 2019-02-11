// 10.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<string.h>
using namespace std;

char &find(char a[], char c, bool&success) {
	char* ptr = strchr(a, c);
	if (ptr == NULL) {
		success = false;
		char& result = (char&)*ptr;
		return result;
	}
	char& result = (char&)*ptr;
	success = true;
	return result;
}

int main()
{
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	if (b == false) {
		cout << "M을 발견할 수 없다" << endl;
		return 0;
	}
	loc = 'm'; // 'M' 위치에 'm' 기록
	cout << s << endl; // "mike"가 출력됨
    return 0;
}

