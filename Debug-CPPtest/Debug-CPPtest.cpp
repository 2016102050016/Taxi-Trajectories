// Debug-CPPtest.cpp: ����Ŀ�ļ���

#include "stdafx.h"
#include "..\CppGetData\CppGetData.h"

using namespace System;

int main()
{
	CCppGetData *ptr = new CCppGetData();//Ϊ������ǵ�new��ֱ��CCppGetData ptr����
	Console::WriteLine("start");
	ptr->getPath("F:");
	ptr->LoadData();
	Console::WriteLine("finish");
    return 0;
}
