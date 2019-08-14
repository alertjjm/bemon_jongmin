#include "stdafx.h"
#include "Mystring.h"
#include <string.h>

CMystring::CMystring():m_pszData(NULL),m_nLength(0)
{
}


CMystring::~CMystring()
{
	Release();
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
const char* CMystring::GetString() {
	return m_pszData;
}
void CMystring::Release() {
	if (m_pszData != NULL)
		delete[] m_pszData;
	m_nLength = 0;
	m_pszData = NULL;

}