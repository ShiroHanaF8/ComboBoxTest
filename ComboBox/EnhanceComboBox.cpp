#include "pch.h"
#include "EnhanceComboBox.h"


BOOL EnhanceComboBox::OnChildNotify(UINT message, WPARAM wParam, LPARAM lParam, LRESULT* pLResult)
{
	// TODO: �����ɓ���ȃR�[�h��ǉ����邩�A�������͊��N���X���Ăяo���Ă��������B

	return CComboBoxEx::OnChildNotify(message, wParam, lParam, pLResult);
}


BOOL EnhanceComboBox::OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo)
{
	// TODO: �����ɓ���ȃR�[�h��ǉ����邩�A�������͊��N���X���Ăяo���Ă��������B

	return CComboBoxEx::OnCmdMsg(nID, nCode, pExtra, pHandlerInfo);
}


BOOL EnhanceComboBox::OnCommand(WPARAM wParam, LPARAM lParam)
{
	// TODO: �����ɓ���ȃR�[�h��ǉ����邩�A�������͊��N���X���Ăяo���Ă��������B

	return CComboBoxEx::OnCommand(wParam, lParam);
}


BOOL EnhanceComboBox::OnWndMsg(UINT message, WPARAM wParam, LPARAM lParam, LRESULT* pResult)
{
	// TODO: �����ɓ���ȃR�[�h��ǉ����邩�A�������͊��N���X���Ăяo���Ă��������B

	return CComboBoxEx::OnWndMsg(message, wParam, lParam, pResult);
}


BOOL EnhanceComboBox::OnNotify(WPARAM wParam, LPARAM lParam, LRESULT* pResult)
{
	// TODO: �����ɓ���ȃR�[�h��ǉ����邩�A�������͊��N���X���Ăяo���Ă��������B

	return CComboBoxEx::OnNotify(wParam, lParam, pResult);
}
