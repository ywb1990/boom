// power.h : power DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CpowerApp
// �йش���ʵ�ֵ���Ϣ������� power.cpp
//

class CpowerApp : public CWinApp
{
public:
	CpowerApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
