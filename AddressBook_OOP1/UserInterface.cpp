#include "stdafx.h"
#include "UserInterface.h"
#include "MyList.h"
#include <Windows.h>
CUserInterface::CUserInterface(CMyList& rList):m_List(rList) {}
CUserInterface::~CUserInterface(){}
void CUserInterface::Add(){
	char name[32];
	char phonenum[32];
	printf("이름을 입력: ");
	fflush(stdin);
	scanf("%s", name);
	printf("전화번호를 입력: ");
	fflush(stdin);
	scanf("%s", phonenum);
	fflush(stdin);
	if (m_List.AddNewNode(name, phonenum) == 0)
		printf("이미 존재");
}
void CUserInterface::Search(){
	char name[32];
	CUserData* puser=NULL;
	printf("찾고자 하는 이름을 입력하시오: ");
	scanf("%s", name);
	puser = m_List.FindNode(name);
	if (puser == NULL)
		printf("찾는 데이터가 없습니다.");
	else
		printf("[%p] %s\t%s [%p]\n", puser, puser->GetName(), puser->GetPhone(), puser->GetNext());
}
void CUserInterface::Remove(){
	char name[32];
	printf("삭제할 이름을 입력하시오: ");
	scanf("%s", name);
	m_List.RemoveNode(name);
}
int CUserInterface::PrintUI() {
	int input = 0;
	printf("1. Add\t2. Search\t3. PrintAll\t4. Remove\t0. Exit\n");
	printf("Input: ");
	scanf("%d",&input);
	system("cls");
	return input;
}
int CUserInterface::Run() {
	int nMenu = 0;
	while ((nMenu = PrintUI()) != 0) {
		switch (nMenu) {
		case 1:
			Add();
			break;
		case 2:
			Search();
			break;
		case 3:
			m_List.PrintAll();
			break;
		case 4:
			Remove();
		}
	}

	return nMenu;
}
