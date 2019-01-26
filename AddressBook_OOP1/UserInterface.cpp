#include "stdafx.h"
#include "UserInterface.h"
#include "MyList.h"
CUserInterface::CUserInterface(CMyList& rList):m_List(rList) {

}
CUserInterface::~CUserInterface(){}
void CUserInterface::Add(){}
void CUserInterface::Search(){}
void CUserInterface::Remove(){}
int CUserInterface::PrintUI() { return 0; }
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