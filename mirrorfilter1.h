#if !defined(AFX_MIRRORFILTER1_H__91AB76FE_0957_48F7_9E4A_F56FA49FC8C5__INCLUDED_)
#define AFX_MIRRORFILTER1_H__91AB76FE_0957_48F7_9E4A_F56FA49FC8C5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CMirrorFilter wrapper class

class CMirrorFilter : public COleDispatchDriver
{
public:
	CMirrorFilter() {}		// Calls COleDispatchDriver default constructor
	CMirrorFilter(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMirrorFilter(const CMirrorFilter& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetDirection();
	void SetDirection(long nNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MIRRORFILTER1_H__91AB76FE_0957_48F7_9E4A_F56FA49FC8C5__INCLUDED_)
