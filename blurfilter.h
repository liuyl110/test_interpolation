#if !defined(AFX_BLURFILTER_H__D459E8EA_71E5_4103_9F0E_5974D5CE2CB1__INCLUDED_)
#define AFX_BLURFILTER_H__D459E8EA_71E5_4103_9F0E_5974D5CE2CB1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CBlurFilter wrapper class

class CBlurFilter : public COleDispatchDriver
{
public:
	CBlurFilter() {}		// Calls COleDispatchDriver default constructor
	CBlurFilter(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CBlurFilter(const CBlurFilter& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetAmount();
	void SetAmount(long nNewValue);
	long GetSteps();
	void SetSteps(long nNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BLURFILTER_H__D459E8EA_71E5_4103_9F0E_5974D5CE2CB1__INCLUDED_)
