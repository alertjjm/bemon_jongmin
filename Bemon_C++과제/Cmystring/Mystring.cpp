#include "stdafx.h"
#include "Mystring.h"
#include <string.h>
#include<iostream>
using namespace std;
CMystring::CMystring():m_pszData(NULL),m_nLength(0)
{
}


CMystring::~CMystring()
{	
	Release();	
}
CMystring::CMystring(const CMystring& rhs):m_pszData(NULL),m_nLength(0) {
	this->SetString(rhs.GetString());
}
CMystring::CMystring(CMystring&& rhs):m_pszData(NULL),m_nLength(0) {
	cout << "CMyString 이동 생성자 호출" << endl;
	m_pszData = rhs.m_pszData;
	m_nLength = rhs.m_nLength;
	rhs.m_pszData = NULL;
	rhs.m_nLength = 0;

}
CMystring::CMystring(const char* pszParam):m_pszData(NULL),m_nLength(0) {
	this->SetString(pszParam);
}
CMystring::operator char*(void) const{
	return m_pszData;
}

CMystring& CMystring::operator=(const CMystring& rhs) {
	this->SetString(rhs.GetString());
	return *this;
}
CMystring CMystring::operator+(const CMystring& rhs) {
	CMystring temp(m_pszData);
	temp.Append(rhs.GetString());
	return temp;
}
CMystring& CMystring::operator+=(const CMystring& rhs) {
	this->Append(rhs.GetString());
	return *this;
}
int CMystring::Append(const char* pszParam) {
	if (pszParam == 0)
		return 0;
	int nLenParam = strlen(pszParam);
	if (nLenParam == 0)
		return 0;
	if (m_pszData == NULL) {
		SetString(pszParam);
		return m_nLength;
	}
	int nLenCur = m_nLength;
	char* pszResult = new char[nLenCur + nLenParam + 1];
	strcpy(pszResult, m_pszData);
	strcpy(pszResult+(sizeof(char)*nLenCur), pszParam);
	Release();
	m_pszData = pszResult;
	m_nLength = nLenCur + nLenParam;
	return m_nLength;

}
int CMystring::GetLength() const {
	return m_nLength;
}
int CMystring::SetString(const char* pszParam) {
	Release();
	if (pszParam == NULL)
		return 0;
	this->m_nLength = strlen(pszParam);
	if (this->m_nLength == 0)
		return 0;
	this->m_pszData = new char[m_nLength + 1];
	strcpy(this->m_pszData, pszParam);
	return this->m_nLength;
}
const char* CMystring::GetString() const{
	return m_pszData;
}
void CMystring::Release() {
	if (m_pszData != NULL)
		delete[] m_pszData;
	m_nLength = 0;
	m_pszData = NULL;

}