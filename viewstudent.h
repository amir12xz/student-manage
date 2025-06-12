#pragma once
#include "afxdialogex.h"
#include "studnetmanage.h"


// viewstudent dialog

class viewstudent : public CDialogEx
{
	DECLARE_DYNAMIC(viewstudent)

public:
	viewstudent(CWnd* pParent = nullptr);   // standard constructor
	virtual ~viewstudent();
	students* data;
	CListCtrl m_list;

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG5 };
#endif

protected:
	virtual BOOL OnInitDialog();
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
