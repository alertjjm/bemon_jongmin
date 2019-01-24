// TemplateArray.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
void ErrorHandling(char* message);
template <typename T>
class CMyArray {
public:
	explicit CMyArray(int nSize) : m_nSize(nSize) {
		m_pData = new T[nSize];
	}
	~CMyArray() { delete[] m_pData; }

	//복사생성자->깊
	CMyArray(const CMyArray &rhs) {
		m_pData = new T[rhs.m_nSize];
		memcpy(m_pData, rhs.m_pData, sizeof(T)*rhs.m_nSize);
		m_nSize = rhs.m_nSize;
	}
	//대입연산자 CMyArrar& operator=
	CMyArray& operator=(const CMyArray& rhs) {
		if (this == &rhs)
			return *this;
		delete[] m_pData;//
		m_pData = new T[rhs.m_nSize];
		memcpy(m_pData, rhs.m_pData, sizeof(T)*rhs.m_nSize);
		this->m_nSize = rhs.m_nSize;
		return *this;
	}
	//이동생성자 
	CMyArray(CMyArray&& rhs) { operator=(rhs); }

	//이동 대입 연산자
	CMyArray& operator=(const CMyArray&& rhs) {
		m_pData = rhs.m_pData;
		m_nSize = rhs.m_nSize;
		rhs.m_pData = nullptr;
		rhs.m_nSize = 0;
	}
	//배열연산자 T&opreator[](int nIndex)
	T& operator[](int nIndex) {
		//if (nIndex < 0 || nIndex >= m_nSize)
		//	ErrorHandling("Error: 배열의 범위를 벗어났습니다!");
		return m_pData[nIndex];
	}
	//상수화된 배열연산자 T&operator[](int nIndex) const
	T& operator[](int nIndex) const {
		return operator[](nIndex);
	}
	//배열요소 개수 반환
	int GetSize() { return m_nSize; }
private:
	T *m_pData = nullptr;
	int m_nSize = 0;
};
int _tmain(int argc, _TCHAR* argv[])
{
	CMyArray<int> arr(5);
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << ' ';
	}
	cout<<endl;
	CMyArray<int> arr2(3);
	arr2 = arr;
	for (int i = 0; i < 5; i++) {
		cout << arr2[i] << ' ';
	}
	cout << endl;
    return 0;
}

void ErrorHandling(char* message) {
	fputs(message, stderr);
	fputc('\n', stderr);
	exit(1);
}