#pragma once
class CMystring
{
public:
	CMystring();
	~CMystring();
	CMystring(const CMystring& rhs);
	CMystring(const char* pszParam);
	CMystring& operator=(const CMystring& rhs);
	operator char*(void) const;
private:
	char* m_pszData;
	int m_nLength;
public:
	int SetString(const char* pszParam);
	const char* GetString() const;
	void Release();
};

