#pragma once
#include "afxdialogex.h"


// searchST dialog

class searchST : public CDialogEx
{
	DECLARE_DYNAMIC(searchST)

public:
	searchST(CWnd* pParent = nullptr);   // standard constructor
	virtual ~searchST();
	CString namesearch;
// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
