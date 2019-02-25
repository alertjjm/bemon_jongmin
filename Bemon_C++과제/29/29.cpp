

// 29.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template<typename T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int&retSize) {
	int i, j;
	int count = 0;
	int choice = sizeMinus;
	T* result = new T[sizeSrc];
	for (int i = 0; i<sizeSrc; i++) {
		for (int j = 0; j<sizeMinus; j++)
			if (src[i] != minus[j]) choice--;

		if (choice == 0) {
			result[count] = src[i];
			count++;
		}
		choice = sizeMinus;
	}
	retSize = count;
	return result;
}


int main()
{
	int x[] = { 1, 10, 100, 5, 4 };
	int y[] = { 4, 6, 10, 9 };
	int size = 0;
	int* result = remove(x, 5, y, 4, size);

	for (int i = 0; i<size; i++)
		cout << result[i] << ' ';
	cout << endl;
    return 0;
}

