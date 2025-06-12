// viewstudent.cpp : implementation file
//

#include "pch.h"
#include "porganjip.h"
#include "afxdialogex.h"
#include "viewstudent.h"


// viewstudent dialog

IMPLEMENT_DYNAMIC(viewstudent, CDialogEx)

viewstudent::viewstudent(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG5, pParent)
{

}

viewstudent::~viewstudent()
{
}

void viewstudent::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1,m_list);
}

BOOL viewstudent::OnInitDialog()
{
	CDialog::OnInitDialog();
	m_list.InsertColumn(0, L"Name", LVCFMT_LEFT, 100);
	m_list.InsertColumn(1, L"Lastname", LVCFMT_LEFT, 100);
	m_list.InsertColumn(2, L"Score", LVCFMT_LEFT, 100);
	students* temp = data;
	int i = 0;
	while (temp)
	{
		m_list.InsertItem(i, temp->name);
		m_list.SetItemText(i, 1, temp->lastname);
		CString scores;
		scores.Format(L"%.2f", temp->score);
		m_list.SetItemText(i, 2, scores);
		i++;
		temp = temp->next;
	}
	return TRUE;
}
BEGIN_MESSAGE_MAP(viewstudent, CDialogEx)
END_MESSAGE_MAP()


// viewstudent message handlers
