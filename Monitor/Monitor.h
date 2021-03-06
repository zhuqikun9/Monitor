
// Monitor.h : PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号

#define		WM_USER_UPDATE_VIEW			WM_USER + 103
#define		WM_USER_UPDATE_ALARM		WM_USER + 104

struct XSleepStruct
{
	int duration;
	HANDLE eventHandle;
};
// CMonitorApp:
// 有关此类的实现，请参阅 Monitor.cpp
//

class CMonitorApp : public CWinApp
{
public:
	CMonitorApp();

// 重写
public:
	virtual BOOL InitInstance();

	static void	XSleep(int nWaitInMSecs);
// 实现

	DECLARE_MESSAGE_MAP()
};

extern CMonitorApp theApp;