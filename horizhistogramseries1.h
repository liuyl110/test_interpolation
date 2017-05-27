#if !defined(AFX_HORIZHISTOGRAMSERIES1_H__D9E8477C_16AC_4C77_A152_E844E41665B4__INCLUDED_)
#define AFX_HORIZHISTOGRAMSERIES1_H__D9E8477C_16AC_4C77_A152_E844E41665B4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CPen1;
class CBrush1;

/////////////////////////////////////////////////////////////////////////////
// CHorizHistogramSeries wrapper class

class CHorizHistogramSeries : public COleDispatchDriver
{
public:
	CHorizHistogramSeries() {}		// Calls COleDispatchDriver default constructor
	CHorizHistogramSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CHorizHistogramSeries(const CHorizHistogramSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CPen1 GetLinesPen();
	long GetTransparency();
	void SetTransparency(long nNewValue);
	CPen1 GetLinePen();
	CBrush1 GetBrush();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HORIZHISTOGRAMSERIES1_H__D9E8477C_16AC_4C77_A152_E844E41665B4__INCLUDED_)
