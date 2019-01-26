#include "stdafx.h"
#include "MyList.h"
#include <cstring>
#define DATA_FILE_NAME "Address.dat"
CMyList::CMyList(){
	//LoadList()
	FILE *fp = NULL;
	CUserData user;
	ReleaseList();
	fopen_s(&fp, DATA_FILE_NAME, "rb");
	while (fread(&user, sizeof(CUserData), 1, fp))
		AddNewNode(user.GetName(), user.GetPhone());
	fclose(fp);
	//end
}
CMyList::~CMyList(){
	//SaveList()
	FILE *fp = NULL;
	CUserData *pTmp = m_Head.pNext;
	fopen_s(&fp, DATA_FILE_NAME, "wb");
	while (pTmp != NULL) {
		if (fwrite(pTmp, sizeof(CUserData), 1, fp) != 1)
			printf("ERROR: %s�� ���� ������ �����ϴµ� �����߽��ϴ�.\n", pTmp->GetName());
		pTmp = pTmp->pNext;
	}
	fclose(fp);
	//end
}

int CMyList::AddNewNode(const char* pszName, const char* pszPhone) {
	CUserData* pNewData;
	pNewData = new CUserData;
	strcpy(pNewData->szName, pszName);
	strcpy(pNewData->szPhone, pszPhone);
	pNewData->pNext = m_Head.pNext;
	m_Head.pNext = pNewData;
	return 1;
}//�ӽ�

void CMyList::PrintAll(){
	CUserData* pTmp = m_Head.pNext;
	while (pTmp != NULL) {
		printf("\n[%p] %s\t%s [%p]\n", pTmp, pTmp->szName, pTmp->szPhone, pTmp->pNext);
		pTmp = pTmp->pNext;
	}
	printf("CUserData Counter : %d\n", CUserData::GetUserDataCounter());
	//_getch();
}

CUserData* CMyList::FindNode(const char* pszName) {
	CUserData* pTmp = m_Head.pNext;
	while (pTmp != NULL) {
		if (strcmp(pszName, pTmp->szName) == 0)
			return pTmp;
		pTmp = pTmp->pNext;
	}
	return NULL;
}//�ӽ�

void CMyList::ReleaseList() {
	CUserData* pTmp = m_Head.pNext;
	CUserData* pDelete = NULL;
	while (pTmp != NULL) {
		pDelete = pTmp;
		pTmp = pTmp->pNext;
		delete pDelete;
	}
	m_Head.pNext = NULL;
}

int CMyList::RemoveNode(const char* pszName) { 
	CUserData* pTmp = &m_Head;
	CUserData* pDelete = NULL;
	while (pTmp != NULL) {
		if (strcmp(pszName, pTmp->pNext->szName) == 0) {
			pDelete = pTmp->pNext;
			pTmp->pNext = pTmp->pNext->pNext;
			delete pDelete;
			return 1;
		}
		pTmp = pTmp->pNext;
	}
	return 0;
} //�ӽ�