
// ComboBoxDlg.h : ヘッダー ファイル
//

#pragma once

#include "EnhanceComboBox.h"

// CComboBoxDlg ダイアログ
class CComboBoxDlg : public CDialogEx
{
// コンストラクション
public:
	CComboBoxDlg(CWnd* pParent = nullptr);	// 標準コンストラクター

// ダイアログ データ
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_COMBOBOX_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV サポート


// 実装
protected:
	HICON m_hIcon;

	CImageList m_image;

	// 生成された、メッセージ割り当て関数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();

	afx_msg LRESULT OnSetFocus(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnKillFocus(WPARAM wParam, LPARAM lParam);

	DECLARE_MESSAGE_MAP()
public:
	CComboBoxEx m_comboBox1;
	EnhanceComboBox m_comboBox2;
	CButton m_radioSetFocus;
	CButton m_radioKillFocus;
};
