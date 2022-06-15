#include "pch.h"
#include "EnhanceComboBox.h"


BOOL EnhanceComboBox::OnChildNotify(UINT message, WPARAM wParam, LPARAM lParam, LRESULT* pLResult)
{
	// TODO: ここに特定なコードを追加するか、もしくは基底クラスを呼び出してください。

	return CComboBoxEx::OnChildNotify(message, wParam, lParam, pLResult);
}


BOOL EnhanceComboBox::OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo)
{
	// TODO: ここに特定なコードを追加するか、もしくは基底クラスを呼び出してください。

	return CComboBoxEx::OnCmdMsg(nID, nCode, pExtra, pHandlerInfo);
}


BOOL EnhanceComboBox::OnCommand(WPARAM wParam, LPARAM lParam)
{
	// TODO: ここに特定なコードを追加するか、もしくは基底クラスを呼び出してください。

	return CComboBoxEx::OnCommand(wParam, lParam);
}


BOOL EnhanceComboBox::OnWndMsg(UINT message, WPARAM wParam, LPARAM lParam, LRESULT* pResult)
{
	// TODO: ここに特定なコードを追加するか、もしくは基底クラスを呼び出してください。

	return CComboBoxEx::OnWndMsg(message, wParam, lParam, pResult);
}


BOOL EnhanceComboBox::OnNotify(WPARAM wParam, LPARAM lParam, LRESULT* pResult)
{
	// TODO: ここに特定なコードを追加するか、もしくは基底クラスを呼び出してください。

	return CComboBoxEx::OnNotify(wParam, lParam, pResult);
}
