
// porganjipDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "porganjip.h"
#include "porganjipDlg.h"
#include "afxdialogex.h"
#include "sabtnamST.h"
#include "studnetmanage.h"
#include "searchST.h"
#include "hazfstudent.h"
#include "viewstudent.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

students *head;
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CporganjipDlg dialog



CporganjipDlg::CporganjipDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_PORGANJIP_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CporganjipDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CporganjipDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_COMMAND(ID_32771, &CporganjipDlg::On32771)
	ON_COMMAND(ID_32773, &CporganjipDlg::On32773)
	ON_COMMAND(ID_32772, &CporganjipDlg::On32772)
	ON_COMMAND(ID_32774, &CporganjipDlg::On32774)
	ON_COMMAND(ID_32775, &CporganjipDlg::On32775)
END_MESSAGE_MAP()


// CporganjipDlg message handlers

BOOL CporganjipDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CporganjipDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CporganjipDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CporganjipDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CporganjipDlg::On32771()
{
	// TODO: Add your command handler code here
	sabtnamST ob1;

	if (ob1.DoModal() == IDOK)
	{
		UpdateData(0);
		head=head->addstudnet(ob1.m_name,ob1.m_lastname,ob1.score);
		head = head->sort();
	}
}

void CporganjipDlg::On32773()
{
	// TODO: Add your command handler code here
	searchST ob3;
	if (ob3.DoModal() == IDOK)
	{
		head->searchstudent(ob3.namesearch);
	}

}

void CporganjipDlg::On32772()
{
	// TODO: Add your command handler code here
	hazfstudent ob4;
	if (ob4.DoModal() == IDOK)
	{
		head->deletestudent(ob4.hazf_st);
	}
}
 
void CporganjipDlg::On32774()
{
}

void CporganjipDlg::On32775()
{
	// TODO: Add your command handler code here
	viewstudent ob5;
	ob5.data = head;
	ob5.DoModal();
}
