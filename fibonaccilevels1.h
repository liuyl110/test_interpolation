#if !defined(AFX_FIBONACCILEVELS1_H__A521CCB8_2EB2_4833_992C_4A2805D1402F__INCLUDED_)
#define AFX_FIBONACCILEVELS1_H__A521CCB8_2EB2_4833_992C_4A2805D1402F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CFibonacciItem;

/////////////////////////////////////////////////////////////////////////////
// CFibonacciLevels wrapper class

class CFibonacciLevels : public COleDispatchDriver
{
public:
	CFibonacciLevels() {}		// Calls COleDispatchDriver default constructor
	CFibonacciLevels(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CFibonacciLevels(const CFibonacciLevels& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CFibonacciItem GetLevel(long Index);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FIBONACCILEVELS1_H__A521CCB8_2EB2_4833_992C_4A2805D1402F__INCLUDED_)
