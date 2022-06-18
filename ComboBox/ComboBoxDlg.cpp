
// ComboBoxDlg.cpp : 実装ファイル
//

#include "pch.h"
#include "framework.h"
#include "ComboBox.h"
#include "ComboBoxDlg.h"
#include "afxdialogex.h"

#include "MessageDefine.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CComboBoxDlg ダイアログ



CComboBoxDlg::CComboBoxDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_COMBOBOX_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CComboBoxDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, m_comboBox1);
	DDX_Control(pDX, IDC_COMBOBOXEX1, m_comboBox2);
	DDX_Control(pDX, IDC_RADIO1, m_radioSetFocus);
	DDX_Control(pDX, IDC_RADIO2, m_radioKillFocus);
}

BEGIN_MESSAGE_MAP(CComboBoxDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_MESSAGE(WM_EXCOMBO_SET_FOCUS, OnSetFocus)
	ON_MESSAGE(WM_EXCOMBO_KILL_FOCUS, OnKillFocus)
END_MESSAGE_MAP()


// CComboBoxDlg メッセージ ハンドラー

BOOL CComboBoxDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// このダイアログのアイコンを設定します。アプリケーションのメイン ウィンドウがダイアログでない場合、
	//  Framework は、この設定を自動的に行います。
	SetIcon(m_hIcon, TRUE);			// 大きいアイコンの設定
	SetIcon(m_hIcon, FALSE);		// 小さいアイコンの設定


	COMBOBOXEXITEM item = {	};
	item.mask = CBEIF_TEXT;
	item.pszText = _T("1");

	m_comboBox1.InsertItem(&item);

	item.pszText = _T("2");
	m_comboBox1.InsertItem(&item);

	item.pszText = _T("3");
	m_comboBox1.InsertItem(&item);

	m_image.Create(32, 32, ILC_COLOR, 0, 2);
	HICON ico = LoadIcon(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDR_MAINFRAME));;
	m_image.Add(ico);
	m_image.Add(ico);
	m_image.Add(ico);
	m_comboBox2.SetImageList(&m_image);

	item.mask = CBEIF_IMAGE | CBEIF_TEXT;
	item.iImage = 0;
	item.pszText = _T("A");
	m_comboBox2.InsertItem(&item);

	item.iImage = 1;
	item.pszText = _T("B");
	m_comboBox2.InsertItem(&item);

	item.iImage = 2;
	item.pszText = _T("C");
	m_comboBox2.InsertItem(&item);

	m_comboBox1.SetCurSel(0);
	m_comboBox2.SetCurSel(0);

	return TRUE;  // フォーカスをコントロールに設定した場合を除き、TRUE を返します。
}

// ダイアログに最小化ボタンを追加する場合、アイコンを描画するための
//  下のコードが必要です。ドキュメント/ビュー モデルを使う MFC アプリケーションの場合、
//  これは、Framework によって自動的に設定されます。

void CComboBoxDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 描画のデバイス コンテキスト

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// クライアントの四角形領域内の中央
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// アイコンの描画
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// ユーザーが最小化したウィンドウをドラッグしているときに表示するカーソルを取得するために、
//  システムがこの関数を呼び出します。
HCURSOR CComboBoxDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

LRESULT CComboBoxDlg::OnSetFocus(WPARAM wParam, LPARAM lParam)
{
	m_radioSetFocus.SetCheck(TRUE);
	m_radioKillFocus.SetCheck(FALSE);
	return TRUE;
}

LRESULT CComboBoxDlg::OnKillFocus(WPARAM wParam, LPARAM lParam)
{
	m_radioSetFocus.SetCheck(FALSE);
	m_radioKillFocus.SetCheck(TRUE);
	return TRUE;
}
