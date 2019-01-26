#pragma once
#include "UserData.h"
class CMyList {
public:
	CMyList();
	~CMyList();
protected:
	void ReleaseList();
	CUserData m_Head;

public:
	CUserData* FindNode(const char* pszName);
	int AddNewNode(const char* pszName, const char* pszPhone);
	void PrintAll();
	int RemoveNode(const char* pszName);
};