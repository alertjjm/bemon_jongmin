// TemplateParam.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

template<typename T, int nSize>
class CMyArray {
public:
	CMyArray() { m_pData = new T[nSize]; }
	~CMyArray() {delete[] m_pData; }
	//�迭 ������
	T& operator[](int nIndex) {
		if (nIndex < 0 || nIndex >= nSize) {
			cout << "�迭�� ������ ������ϴ�!" << endl;
			exit(1);
		}
		return m_pData[nIndex];
	}
	//���ȭ�� �迭 ������
	T operator[](int nIndex) const{
		if (nIndex < 0 || nIndex >= nSize) {
			cout << "�迭�� ������ ������ϴ�!" << endl;
			exit(1);
		}
		return m_pData[nIndex];
	}
	//�迭����� ������ȯ GetSize
	int GetSize() {
		return nSize;
	}
private:
	T* m_pData = nullptr;
};
int _tmain(int argc, _TCHAR* argv[])
{
	CMyArray<int, 3> arr;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	for (int i = 0; i < 3; i++) {
		cout << arr[i] << endl;
	}
    return 0;
}

