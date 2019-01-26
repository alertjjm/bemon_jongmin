#include "stdafx.h"
#include "MyList.h"

CMyList::CMyList(){}
CMyList::~CMyList(){}

void CMyList::ReleaseList(){}
void CMyList::PrintAll(){}
CUserData* CMyList::FindNode(const char* pszName) { CUserData* re=nullptr; return re; }//임시
int CMyList::AddNewNode(const char* pszName, const char* pszPhone) { return 0; }//임시
int CMyList::RemoveNode(const char* pszName) { return 0; } //임시