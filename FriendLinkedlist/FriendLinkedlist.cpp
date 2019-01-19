// FriendLinkedlist.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class CNode {
	friend class CMyList;
public:
	explicit CNode(const char* pszName) {
		strcpy_s(m_szName, sizeof(m_szName), pszName);
	}
private:
	char m_szName[32];
	CNode* pNext = nullptr;
};

class CMyList {
public:
	CMyList(): m_HeadNode("Dummy Head"){}
	~CMyList() {
		CNode *pNode = m_HeadNode.pNext;
		CNode *pDelete = nullptr;
		while (pNode) {
			pDelete = pNode;
			pNode = pNode->pNext;
			cout << pDelete->m_szName << endl;
			delete pDelete;
		}
		m_HeadNode.pNext = nullptr;
	}
	void AddNewNode(const char *pszName) {
		CNode*pNode = new CNode(pszName);
		pNode->pNext = m_HeadNode.pNext;
		m_HeadNode.pNext = pNode;
	}
private:
	CNode m_HeadNode;

};

int _tmain(int argc, _TCHAR* argv[])
{
	CMyList list;
	list.AddNewNode("길동");
	list.AddNewNode("철수");
	list.AddNewNode("영희");
	return 0;
    return 0;
}

