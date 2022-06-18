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
BEGIN_MESSAGE_MAP(EnhanceComboBox, CComboBoxEx)
	ON_CONTROL_REFLECT(CBN_SETFOCUS, &EnhanceComboBox::OnCbnSetfocus)
	ON_CONTROL_REFLECT(CBN_KILLFOCUS, &EnhanceComboBox::OnCbnKillfocus)
	ON_CONTROL_REFLECT(CBN_DROPDOWN, &EnhanceComboBox::OnCbnDropdown)
END_MESSAGE_MAP()


void EnhanceComboBox::OnCbnSetfocus()
{
	GetParent()->PostMessageW(WM_EXCOMBO_SET_FOCUS);
}


void EnhanceComboBox::OnCbnKillfocus()
{
	GetParent()->PostMessageW(WM_EXCOMBO_KILL_FOCUS);
}


void EnhanceComboBox::OnCbnDropdown()
{
	GetParent()->PostMessageW(WM_EXCOMBO_SET_FOCUS);
}
