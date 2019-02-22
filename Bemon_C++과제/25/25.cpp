// 25.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
		cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
		cout << getSourceString() << "을 입력하세요>> ";
		cin >> src;
		cout << "변환 결과 : " << convert(src) << getDestString() << endl;
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
	string getSourceString() { return "달러"; }
	string getDestString() { return "원화"; }
};
class KmToMile : public Converter{
public:
	KmToMile(double km):Converter(km) {}
	double convert(double src) {
		double result;
		result = src / ratio;
		return result;
	}
	string getSourceString() { return "킬로"; }
	string getDestString() { return "마일"; }
};
int main()
{
	WonToDollar wd(1010); // 1 달러에 1010원
	wd.run();
	KmToMile toMile(1.609344); // 1mile은 1.609344 Km
	toMile.run();

    return 0;
}

