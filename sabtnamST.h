#pragma once
#include "afxdialogex.h"


// sabtnamST dialog

class sabtnamST : public CDialogEx
{
	DECLARE_DYNAMIC(sabtnamST)
	CString m_name, m_lastname;
	float score=10;
public:
	sabtnamST(CWnd* pParent = nullptr);   // standard constructor
	virtual ~sabtnamST();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
