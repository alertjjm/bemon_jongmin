// AddressBook_OOP1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "UserInterface.h"
#include "MyList.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CMyList DB;
	CUserInterface UI(DB);
	UI.Run();
    return 0;
}

