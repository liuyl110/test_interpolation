#if !defined(AFX_RSIFUNCTION_H__02088698_1E6F_44DA_963C_0041E311EB1E__INCLUDED_)
#define AFX_RSIFUNCTION_H__02088698_1E6F_44DA_963C_0041E311EB1E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CRSIFunction wrapper class

class CRSIFunction : public COleDispatchDriver
{
public:
	CRSIFunction() {}		// Calls COleDispatchDriver default constructor
	CRSIFunction(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CRSIFunction(const CRSIFunction& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetStyle();
	void SetStyle(long nNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RSIFUNCTION_H__02088698_1E6F_44DA_963C_0041E311EB1E__INCLUDED_)
