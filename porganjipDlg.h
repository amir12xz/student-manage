
// porganjipDlg.h : header file
//

#pragma once


// CporganjipDlg dialog
class CporganjipDlg : public CDialogEx
{
// Construction
public:

	CporganjipDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PORGANJIP_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32771();
	afx_msg void On32773();
	afx_msg void On32772();
	afx_msg void On32774();
	afx_msg void On32775();
};
