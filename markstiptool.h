#if !defined(AFX_MARKSTIPTOOL_H__FD7EB3DD_E52A_4584_84B9_8E4538B37C7D__INCLUDED_)
#define AFX_MARKSTIPTOOL_H__FD7EB3DD_E52A_4584_84B9_8E4538B37C7D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CMarksTipTool wrapper class

class CMarksTipTool : public COleDispatchDriver
{
public:
	CMarksTipTool() {}		// Calls COleDispatchDriver default constructor
	CMarksTipTool(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMarksTipTool(const CMarksTipTool& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetSeries();
	void SetSeries(const VARIANT& newValue);
	long GetMouseAction();
	void SetMouseAction(long nNewValue);
	long GetStyle();
	void SetStyle(long nNewValue);
	long GetDelay();
	void SetDelay(long nNewValue);
	long GetHideDelay();
	void SetHideDelay(long nNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MARKSTIPTOOL_H__FD7EB3DD_E52A_4584_84B9_8E4538B37C7D__INCLUDED_)
