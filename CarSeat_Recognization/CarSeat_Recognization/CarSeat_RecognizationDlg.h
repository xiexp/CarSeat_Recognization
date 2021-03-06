
// CarSeat_RecognizationDlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CCarSeat_RecognizationDlg 对话框
class CCarSeat_RecognizationDlg : public CDHtmlDialog
{
// 构造
public:
	CCarSeat_RecognizationDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CARSEAT_RECOGNIZATION_DIALOG, IDH = IDR_HTML_CARSEAT_RECOGNIZATION_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持

	//HRESULT OnButtonOK(IHTMLElement *pElement);
	//HRESULT OnButtonCancel(IHTMLElement *pElement);

// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	DECLARE_DHTML_EVENT_MAP()
public:
	CStatic m_ImagePattern;
	CStatic m_ImageRec;
	CStatic m_barCode;
	// 显示统计结果，包括成功次数，失败次数，成功率
	CStatic m_RegRatio;

	size_t m_nSuccessCount;
	size_t m_nFailCount;
};
