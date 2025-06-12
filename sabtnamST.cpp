// sabtnamST.cpp : implementation file
//

#include "pch.h"
#include "porganjip.h"
#include "afxdialogex.h"
#include "sabtnamST.h"


// sabtnamST dialog

IMPLEMENT_DYNAMIC(sabtnamST, CDialogEx)

sabtnamST::sabtnamST(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

sabtnamST::~sabtnamST()
{
}

void sabtnamST::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_name);
		DDX_Text(pDX, IDC_EDIT2, m_lastname);
		DDX_Text(pDX, IDC_EDIT3, score);
}


BEGIN_MESSAGE_MAP(sabtnamST, CDialogEx)
END_MESSAGE_MAP()


// sabtnamST message handlers
