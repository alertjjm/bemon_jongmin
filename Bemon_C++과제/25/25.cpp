// 25.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<string>
#include<iostream>
using namespace std;
class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0;
	virtual string getSourceString() = 0;
	virtual string getDestString() = 0;
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};
class WonToDollar : public Converter {
public:
	WonToDollar(int won):Converter(won){}
	double convert(double src) {
		double result;
		result = src * ratio;
		return result;
	}
	string getSourceString() { return "�޷�"; }
	string getDestString() { return "��ȭ"; }
};
class KmToMile : public Converter{
public:
	KmToMile(double km):Converter(km) {}
	double convert(double src) {
		double result;
		result = src / ratio;
		return result;
	}
	string getSourceString() { return "ų��"; }
	string getDestString() { return "����"; }
};
int main()
{
	WonToDollar wd(1010); // 1 �޷��� 1010��
	wd.run();
	KmToMile toMile(1.609344); // 1mile�� 1.609344 Km
	toMile.run();

    return 0;
}

