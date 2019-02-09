// 5.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class CoffeeMachine {
public:
	CoffeeMachine(){}
	CoffeeMachine(int coffee, int water, int sugar) {
		c_coffee = coffee;
		c_water = water;
		c_sugar = sugar;
	}
	~CoffeeMachine(){}
	void drinkEspresso() { c_coffee -= 1; c_water -= 1; }
	void show(){
		cout << "커피량: " << c_coffee <<"    "<< "물량: " << c_water << "    "<<"설탕량: " << c_sugar << endl;
	}
	void drinkAmericano() { c_coffee -= 1; c_water -= -2; }
	void drinkSugarCoffee() { c_coffee -= 1; c_water -= 2; c_sugar -= 1; }
	void fill() { c_coffee = 10; c_water = 10; c_sugar = 10; }

private:
	int c_coffee;
	int c_water;
	int c_sugar;
};

int _tmain(int argc, _TCHAR* argv[])
{
	CoffeeMachine java(5, 10, 3); // 커피량:5, 물량:10, 설탕:6으로 초기화
	java.drinkEspresso(); // 커피 1, 물 1 소비	
	java.show(); // 현재 커피 머신의 상태 출력
	java.drinkAmericano(); // 커피 1, 물 2 소비
	java.show(); // 현재 커피 머신의 상태 출력
	java.drinkSugarCoffee(); // 커피 1, 물 2, 설탕 1 소비
	java.show(); // 현재 커피 머신의 상태 출력
	java.fill(); // 커피 10, 물 10, 설탕 10으로 채우기
	java.show(); // 현재 커피 머신의 상태 출력

    return 0;
}

