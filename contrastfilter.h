#if !defined(AFX_CONTRASTFILTER_H__746CF8E2_88CF_4EF6_9E70_981B5021225F__INCLUDED_)
#define AFX_CONTRASTFILTER_H__746CF8E2_88CF_4EF6_9E70_981B5021225F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CContrastFilter wrapper class

class CContrastFilter : public COleDispatchDriver
{
public:
	CContrastFilter() {}		// Calls COleDispatchDriver default constructor
	CContrastFilter(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CContrastFilter(const CContrastFilter& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetPercent();
	void SetPercent(BOOL bNewValue);
	long GetAmount();
	void SetAmount(long nNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CONTRASTFILTER_H__746CF8E2_88CF_4EF6_9E70_981B5021225F__INCLUDED_)
