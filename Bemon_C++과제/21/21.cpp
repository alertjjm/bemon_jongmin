// 21.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<string>
#include<iostream>
using namespace std;

class BaseArray {
private:
	int capacity; // 동적 할당된 메모리 용량
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

class MyQueue : public BaseArray {
	int index;
	int dindex;
public:
	MyQueue(int a) :BaseArray(a) { index = 0; dindex = 0; }
	void enqueue(int a) {
		put(index, a);
		index++;
	}
	int capacity() {
		return getCapacity();
	}
	int length() {
		return index;
	}
	int dequeue() {
		index--;
		dindex++;
		return get(dindex - 1);
	}

};


int main()
{
	MyQueue mQ(100);
	int n;
	cout << "큐에 삽입할 5개의 정수를 입력하라>> ";
	for (int i = 0; i<5; i++) {
		cin >> n;
		mQ.enqueue(n); // 큐에 삽입
	}
	cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length() << endl;
	cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' '; // 큐에서 제거하여 출력
	}
	cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;

    return 0;
}

