// Debug-CPPtest.cpp: ����Ŀ�ļ���

#include "stdafx.h"
#include "..\CppGetData\CppGetData.h"

using namespace System;

int main()
{
	Console::WriteLine("start");
	CCppGetData *ptr = new CCppGetData();//Ϊ������ǵ�new��ֱ��CCppGetData ptr����
	Console::WriteLine("start");
	ptr->LoadData("F:");
	Console::WriteLine("finish");
    return 0;
}
