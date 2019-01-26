#pragma once
class CUserData {
	friend class CMyList;
public:
	CUserData(void);
	CUserData(const char* pszName, const char* pszPhone);
	~CUserData(void);

	const char* GetName(void) const { return szName; }
	const char* GetPhone() const { return szPhone; }
	CUserData* GetNext() const { return pNext; }

	static int GetUserDataCounter(void) { return nUserDataCounter; }

protected:
	char szName[32];
	char szPhone[32];
	CUserData* pNext;
	static int nUserDataCounter;
};