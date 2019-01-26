#pragma once

class CMyList;

class CUserInterface {
public:
	CUserInterface(CMyList &rList);
	~CUserInterface();
	void Add();
protected:
	CMyList &m_List;
public:
	void Search();
	void Remove();
	int PrintUI();
	int Run();
};