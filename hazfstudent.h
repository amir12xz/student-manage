#pragma once
#include "afxdialogex.h"


// hazfstudent dialog

class hazfstudent : public CDialogEx
{
	DECLARE_DYNAMIC(hazfstudent)

public:
	hazfstudent(CWnd* pParent = nullptr);   // standard constructor
	virtual ~hazfstudent();
	CString hazf_st;

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
