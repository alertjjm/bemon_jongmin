// 8.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#define PI 3.141592
using namespace std;

class Circle {
	int radius; // ���� ������ ��
public:
	Circle(){}
	void setRadius(int r) {
		radius = r;
	}// �������� �����Ѵ�.
	double getArea() {
		return (double)radius*radius*PI;
	} // ������ �����Ѵ�.
};


int main()
{
	Circle a[3];
	int i;
	int num;
	int total = 0;
	for (i = 0; i < 3; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> num;
		if (num < 0) {
			cout << "�������� ���� �����Դϴ�. ���� �������� �ٽ� �Է��Ͻÿ�." << endl;
			i -= 1;
			continue;
		}
		a[i].setRadius(num);
		if (a[i].getArea() > 100)
			total += 1;
	}
	cout << "������ 100���� ū ���� " << total << "���Դϴ�." << endl;
    return 0;
}

