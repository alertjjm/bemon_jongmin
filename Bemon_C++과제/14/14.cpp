// 14.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class ArrayUtility2 {

public:
	ArrayUtility2(int s){
		x = new int[s];
		y = new int[s];
	}
	static int* concat(int s1[], int s2[], int size) {
		int* result = new int[size * 2];
		for (int i = 0; i < size; i++) {
			result[i] = s1[i];
		}
		for (int i = 0; i < size; i++) {
			result[i + 5] = s2[i];
		}
		return result;
	}
	static int* remove(int s1[], int s2[], int size, int& retSize) {
		int i,j;
		int index;
		int num = 0;
		retSize = size;
		for (i = 0; i < size; i++) {
			for (j = 0; j < size; j++) {
				if (s1[i] == s2[j]) {
					retSize--;
				}
			}
		}
		int* result = new int[retSize];
		for (i = 0; i < size; i++) {
			index = 0;
			for (j = 0; j < size; j++) {
				if (s1[i] == s2[j]) {
					index++;
				}
			}
			if (index == 0) {
				result[num] = s1[i];
				num++;
			}
		}
		if (retSize == 0)
			return NULL;
		return result;
	}
	int* x = nullptr;
	int* y = nullptr;
};


int main()
{
	int size_m = 5;
	int ret = 0;
	int i;
	string strx;
	string stry;
	ArrayUtility2 a(size_m);
	int* result1;
	int* result2;
	cout << "정수를 " << size_m << "개 입력하라. 배열 x에 삽입한다. >> " << endl;
	getline(cin, strx);
	for (i = 0; i < size_m; i++) {
		a.x[i] = strx[i * 2];
	}
	getline(cin, stry);
	for (i = 0; i < size_m; i++) {
		a.y[i] = stry[i * 2];
	}
	result1 = a.concat(a.x, a.y, size_m);
	result2 = a.remove(a.x, a.y, size_m, ret);
	cout << "합친 정수 배열을 출력한다.\n" << result1 << endl;
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << ret << "\n" << result2 << endl;
    return 0;
}

