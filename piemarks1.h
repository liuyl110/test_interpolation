#if !defined(AFX_PIEMARKS1_H__0EC5A223_AEF0_4E36_9649_323AB90A5140__INCLUDED_)
#define AFX_PIEMARKS1_H__0EC5A223_AEF0_4E36_9649_323AB90A5140__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CPieMarks wrapper class

class CPieMarks : public COleDispatchDriver
{
public:
	CPieMarks() {}		// Calls COleDispatchDriver default constructor
	CPieMarks(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPieMarks(const CPieMarks& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetVertCenter();
	void SetVertCenter(BOOL bNewValue);
	long GetLegSize();
	void SetLegSize(long nNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PIEMARKS1_H__0EC5A223_AEF0_4E36_9649_323AB90A5140__INCLUDED_)
