// 8.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#define PI 3.141592
using namespace std;

class Circle {
	int radius; // 원의 반지름 값
public:
	Circle(){}
	void setRadius(int r) {
		radius = r;
	}// 반지름을 설정한다.
	double getArea() {
		return (double)radius*radius*PI;
	} // 면적을 리턴한다.
};


int main()
{
	Circle a[3];
	int i;
	int num;
	int total = 0;
	for (i = 0; i < 3; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> num;
		if (num < 0) {
			cout << "반지름의 값이 음수입니다. 원의 반지름을 다시 입력하시오." << endl;
			i -= 1;
			continue;
		}
		a[i].setRadius(num);
		if (a[i].getArea() > 100)
			total += 1;
	}
	cout << "면적이 100보다 큰 원은 " << total << "개입니다." << endl;
    return 0;
}

