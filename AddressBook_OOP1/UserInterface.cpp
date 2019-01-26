#include "stdafx.h"
#include "UserInterface.h"

CUserInterface::CUserInterface(CMyList& rList):m_List(rList) {

}
CUserInterface::~CUserInterface(){}
void CUserInterface::Add(){}
void CUserInterface::Search(){}
void CUserInterface::Remove(){}
void CUserInterface::PrintUI(){}
int CUserInterface::Run() { return 0; }