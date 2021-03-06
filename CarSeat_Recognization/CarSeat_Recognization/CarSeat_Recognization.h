
// CarSeat_Recognization.h : PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号
#include "./common/ParamManager.h"
#include "./common/Log.h"


// CCarSeat_RecognizationApp: 
// 有关此类的实现，请参阅 CarSeat_Recognization.cpp
//

class CCarSeat_RecognizationApp : public CWinApp
{
public:
	CCarSeat_RecognizationApp();

// 重写
public:
	virtual BOOL InitInstance();

private:
	static void pingServer(int serverIp);
// 实现
	CLog *m_pLog;
	CParamManager *m_pParamManager;


	DECLARE_MESSAGE_MAP()
};

extern CCarSeat_RecognizationApp theApp;