#if !defined(AFX_MOSAICFILTER1_H__E7ED9032_4CF1_47AF_BFE7_5003285F7280__INCLUDED_)
#define AFX_MOSAICFILTER1_H__E7ED9032_4CF1_47AF_BFE7_5003285F7280__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CMosaicFilter wrapper class

class CMosaicFilter : public COleDispatchDriver
{
public:
	CMosaicFilter() {}		// Calls COleDispatchDriver default constructor
	CMosaicFilter(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMosaicFilter(const CMosaicFilter& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

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

#endif // !defined(AFX_MOSAICFILTER1_H__E7ED9032_4CF1_47AF_BFE7_5003285F7280__INCLUDED_)
