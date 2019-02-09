// 5.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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
		cout << "Ŀ�Ƿ�: " << c_coffee <<"    "<< "����: " << c_water << "    "<<"������: " << c_sugar << endl;
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
	CoffeeMachine java(5, 10, 3); // Ŀ�Ƿ�:5, ����:10, ����:6���� �ʱ�ȭ
	java.drinkEspresso(); // Ŀ�� 1, �� 1 �Һ�	
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���
	java.drinkAmericano(); // Ŀ�� 1, �� 2 �Һ�
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���
	java.drinkSugarCoffee(); // Ŀ�� 1, �� 2, ���� 1 �Һ�
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���
	java.fill(); // Ŀ�� 10, �� 10, ���� 10���� ä���
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���

    return 0;
}

