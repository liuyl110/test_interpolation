#if !defined(AFX_STDDEVIATIONFUNCTION_H__1319DF7B_8108_45E5_82E6_A386B65BEFDB__INCLUDED_)
#define AFX_STDDEVIATIONFUNCTION_H__1319DF7B_8108_45E5_82E6_A386B65BEFDB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CStdDeviationFunction wrapper class

class CStdDeviationFunction : public COleDispatchDriver
{
public:
	CStdDeviationFunction() {}		// Calls COleDispatchDriver default constructor
	CStdDeviationFunction(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CStdDeviationFunction(const CStdDeviationFunction& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetComplete();
	void SetComplete(BOOL bNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDDEVIATIONFUNCTION_H__1319DF7B_8108_45E5_82E6_A386B65BEFDB__INCLUDED_)
