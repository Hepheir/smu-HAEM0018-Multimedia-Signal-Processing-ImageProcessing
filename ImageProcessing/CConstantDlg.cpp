// CConstantDlg.cpp: 구현 파일
//

#include "pch.h"
#include "ImageProcessing.h"
#include "afxdialogex.h"
#include "CConstantDlg.h"


// CConstantDlg 대화 상자

IMPLEMENT_DYNAMIC(CConstantDlg, CDialogEx)

CConstantDlg::CConstantDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG4, pParent)
{

}

CConstantDlg::~CConstantDlg()
{
}

void CConstantDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CConstantDlg, CDialogEx)
END_MESSAGE_MAP()


// CConstantDlg 메시지 처리기
