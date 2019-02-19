// 14.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size) {
		int* p = new int[size];
		int n = size / 2;
		for (int i = 0; i< n; i++) {
			p[i] = s1[i];
			p[i + n] = s2[i];
		}
		return p;
	}
	static int* remove(int s1[], int s2[], int size, int& retSize) {

		for (int i = 0; i< size; i++) {
			for (int j = 0; j< size; j++) {
				if (s1[i] == s2[j]) s1[i] = NULL;
			}
		}
		for (int i = 0; i< size; i++)
			if (s1[i] != NULL) retSize++;

		int *p = new int[retSize];
		int n = 0;
		for (int i = 0; i< size; i++)
			if (s1[i] != NULL) { p[n] = s1[i]; n++; }

		if (retSize == 0) return NULL;
		else return p;
	}
};

int main() {
	int x[5], y[5], retsize = 0, size;

	cout << "정수를 5 개 입력하라. 배열 x에 삽입한다>>";
	cin >> x[0] >> x[1] >> x[2] >> x[3] >> x[4];
	cout << "정수를 5 개 입력하라. 배열 y에 삽입한다>>";
	cin >> y[0] >> y[1] >> y[2] >> y[3] >> y[4];
	cout << "합친 정수 배열을 출력한다." << endl;

	size = sizeof(x) / 4 + sizeof(y) / 4;
	int *temp = ArrayUtility2::concat(x, y, size);
	for (int i = 0; i< size; i++) cout << temp[i] << ' ';
	cout << endl;

	size = sizeof(x) / 4;
	temp = ArrayUtility2::remove(x, y, size, retsize);
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << retsize << endl;
	for (int i = 0; i< retsize; i++) cout << temp[i] << ' ';
	cout << endl;
}