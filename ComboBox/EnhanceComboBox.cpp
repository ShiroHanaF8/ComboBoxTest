#include "pch.h"
#include "EnhanceComboBox.h"
#include "MessageDefine.h"

BOOL EnhanceComboBox::OnChildNotify(UINT message, WPARAM wParam, LPARAM lParam, LRESULT* pLResult)
{
	switch (message)
	{
	default:
		//TRACE(_T("Child Notify message %08u wParam %08u lParam %08u\n"), message, wParam, lParam);
		break;
	}

	return CComboBoxEx::OnChildNotify(message, wParam, lParam, pLResult);
}


BOOL EnhanceComboBox::OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo)
{

	switch (nCode) {
	case CBENF_KILLFOCUS:
		TRACE(_T("CBENF_KILLFOCUS nID %08u\n"), nID);
		break;
	case CBN_KILLFOCUS:
		TRACE(_T("CBN_KILLFICOS nID %08u\n"), nID);
		GetParent()->PostMessageW(WM_EXCOMBO_KILL_FOCUS);
		break;
	case CBN_SETFOCUS:
		TRACE(_T("CBN_SETFOCUS nID %08u\n"), nID);
		GetParent()->PostMessageW(WM_EXCOMBO_SET_FOCUS);
		break;
	}

	return CComboBoxEx::OnCmdMsg(nID, nCode, pExtra, pHandlerInfo);
}


BOOL EnhanceComboBox::OnCommand(WPARAM wParam, LPARAM lParam)
{
	//TRACE(_T("Cmd wParam %08u lParam %08u\n"), wParam, lParam);

	return CComboBoxEx::OnCommand(wParam, lParam);
}


BOOL EnhanceComboBox::OnWndMsg(UINT message, WPARAM wParam, LPARAM lParam, LRESULT* pResult)
{
	//TRACE(_T("Wnd message %08u wParam %08u lParam %08u\n"), message, wParam, lParam);

	return CComboBoxEx::OnWndMsg(message, wParam, lParam, pResult);
}


BOOL EnhanceComboBox::OnNotify(WPARAM wParam, LPARAM lParam, LRESULT* pResult)
{
	//TRACE(_T("Notify wParam %08u lParam %08u\n"), wParam, lParam);

	return CComboBoxEx::OnNotify(wParam, lParam, pResult);
}
