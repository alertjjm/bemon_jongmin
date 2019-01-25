// TemplateParam.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

template<typename T, int nSize>
class CMyArray {
public:
	CMyArray() { m_pData = new T[nSize]; }
	~CMyArray() {delete[] m_pData; }
	//배열 연산자
	T& operator[](int nIndex) {
		if (nIndex < 0 || nIndex >= nSize) {
			cout << "배열의 범위를 벗어났습니다!" << endl;
			exit(1);
		}
		return m_pData[nIndex];
	}
	//상수화된 배열 연산자
	T operator[](int nIndex) const{
		if (nIndex < 0 || nIndex >= nSize) {
			cout << "배열의 범위를 벗어났습니다!" << endl;
			exit(1);
		}
		return m_pData[nIndex];
	}
	//배열요소의 개수반환 GetSize
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

