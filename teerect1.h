#if !defined(AFX_TEERECT1_H__2F1C4FB7_B0A5_406A_8198_A5147CCC3541__INCLUDED_)
#define AFX_TEERECT1_H__2F1C4FB7_B0A5_406A_8198_A5147CCC3541__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CTeeRect wrapper class

class CTeeRect : public COleDispatchDriver
{
public:
	CTeeRect() {}		// Calls COleDispatchDriver default constructor
	CTeeRect(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CTeeRect(const CTeeRect& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetLeft();
	long GetTop();
	long GetRight();
	long GetBottom();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEERECT1_H__2F1C4FB7_B0A5_406A_8198_A5147CCC3541__INCLUDED_)
