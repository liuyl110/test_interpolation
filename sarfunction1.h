#if !defined(AFX_SARFUNCTION1_H__EBCB4CD5_D756_4456_85C5_D8FAA0EC340D__INCLUDED_)
#define AFX_SARFUNCTION1_H__EBCB4CD5_D756_4456_85C5_D8FAA0EC340D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CSARFunction wrapper class

class CSARFunction : public COleDispatchDriver
{
public:
	CSARFunction() {}		// Calls COleDispatchDriver default constructor
	CSARFunction(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CSARFunction(const CSARFunction& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetAccelerationFactor();
	void SetAccelerationFactor(double newValue);
	double GetMaxStep();
	void SetMaxStep(double newValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SARFUNCTION1_H__EBCB4CD5_D756_4456_85C5_D8FAA0EC340D__INCLUDED_)
