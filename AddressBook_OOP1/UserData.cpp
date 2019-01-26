#include "stdafx.h"
#include "UserData.h"
#include <string.h>
int CUserData::nUserDataCounter = 0;
CUserData::CUserData()
	:pNext(NULL)
{
	memset(szName, 0, sizeof(szName));
	memset(szPhone, 0, sizeof(szPhone));
	nUserDataCounter++;
}
CUserData::CUserData(const char* pszName, const char* pszPhone){
	memset(szName, 0, sizeof(szName));
	memset(szPhone, 0, sizeof(szPhone));
	strcpy_s(szName, pszName);
	strcpy_s(szPhone, pszPhone);
	nUserDataCounter++;
}

CUserData::~CUserData() {
	nUserDataCounter--;
}
