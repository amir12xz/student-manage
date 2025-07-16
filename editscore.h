#pragma once
#include "afxdialogex.h"


// editscore dialog

class editscore : public CDialogEx
{
	DECLARE_DYNAMIC(editscore)

public:
	editscore(CWnd* pParent = nullptr);   // standard constructor
	virtual ~editscore();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG6 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
