// hazfstudent.cpp : implementation file
//

#include "pch.h"
#include "porganjip.h"
#include "afxdialogex.h"
#include "hazfstudent.h"


// hazfstudent dialog

IMPLEMENT_DYNAMIC(hazfstudent, CDialogEx)

hazfstudent::hazfstudent(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG4, pParent)
{

}

hazfstudent::~hazfstudent()
{
}

void hazfstudent::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1,hazf_st);
}


BEGIN_MESSAGE_MAP(hazfstudent, CDialogEx)
END_MESSAGE_MAP()


// hazfstudent message handlers
