// searchST.cpp : implementation file
//

#include "pch.h"
#include "porganjip.h"
#include "afxdialogex.h"
#include "searchST.h"


// searchST dialog

IMPLEMENT_DYNAMIC(searchST, CDialogEx)

searchST::searchST(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG2, pParent)
{

}

searchST::~searchST()
{
}

void searchST::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, namesearch);
}


BEGIN_MESSAGE_MAP(searchST, CDialogEx)
END_MESSAGE_MAP()


// searchST message handlers
