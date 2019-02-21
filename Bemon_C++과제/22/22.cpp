// 22.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<string>
#include<iostream>
using namespace std;

class BaseArray {
private:
	int capacity; // ���� �Ҵ�� �޸� �뷮
	int *mem;
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity; mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};
class MyStack : public BaseArray {
	int top;
public:
	MyStack(int a): BaseArray(a) {top = 0;}
	void push(int a) {
		put(top, a);
		top++;
	}
	int capacity() { return getCapacity(); }
	int length() { return top; }
	int pop() {
		top--;
		return get(top);
	}
};


int main()
{
	MyStack mStack(100);
	int n;
	cout << "���ÿ� ������ 5���� ������ �Է��϶�>> ";
	for (int i = 0; i<5; i++) {
		cin >> n;
		mStack.push(n); // ���ÿ� Ǫ��
	}
	cout << "���� �뷮:" << mStack.capacity() << ", ���� ũ��:" << mStack.length() << endl;
	cout << "������ ��� ���Ҹ� ���Ͽ� ����Ѵ�>> ";
	while (mStack.length() != 0) {
		cout << mStack.pop() << ' '; // ���ÿ��� ��
	}
	cout << endl << "������ ���� ũ�� : " << mStack.length() << endl;

    return 0;
}

