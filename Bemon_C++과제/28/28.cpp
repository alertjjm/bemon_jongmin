// 28.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template<typename T>
T* concat(T a[], int sizea, T b[], int sizeb) {
	int i;
	T* result = new T[sizea + sizeb];
	for (i = 0; i < sizea; i++) {
		result[i] = a[i];
	}
	for (i = sizea; i < sizea + sizeb; i++) {
		result[i] = b[i - sizea];
	}
	return result;
}

int main()
{
	int x[] = { 1, 10, 100, 5, 4 };
	int y[] = { 7, 6, 10, 9 };
	int *a = concat(x, 5, y, 4);

	for (int i = 0; i<9; i++)
		cout << a[i] << ' ';
	cout << endl;
    return 0;
}

