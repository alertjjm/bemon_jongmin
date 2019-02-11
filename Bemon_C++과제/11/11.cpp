
// 11.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class MyIntStack {
	int p[10];
	int tos; // ������ ����⸦ ����Ű�� �ε���
public:
	MyIntStack() { tos = -1; };
	bool push(int n) {
		if (tos == 9)
			return false;
		else {
			tos++;
			p[tos] = n;
			return true;
		}
	}; // ���� n Ǫ��. �� �� ������ false, �ƴϸ� true ����
	bool pop(int &n) {
		if (tos == -1)
			return false;
		else {
			n = p[tos];
			tos--;
			return true;
		}
	}; // ���Ͽ� n�� ����.������ ��� ������ false, �ƴϸ� true ����
};

/*
���࿹:
0 1 2 3 4 5 6 7 8 9
11��° stack full
9 8 7 6 5 4 3 2 1 0
11��° stack empty
*/
int main()
{
	MyIntStack a;
	for (int i = 0; i<11; i++) { // 11���� Ǫ���ϸ�, ���������� stack full�� �ȴ�.
		if (a.push(i)) cout << i << ' '; // Ǫ�õ� �� ����
		else cout << endl << i + 1 << " ��° stack full" << endl;
	}
	int n;
	for (int i = 0; i<11; i++) { // 11���� ���ϸ�, ���������� stack empty�� �ȴ�.
		if (a.pop(n)) cout << n << ' '; // �� �� �� ���
		else cout << endl << i + 1 << " ��° stack empty";
	}
	cout << endl;
    return 0;
}

