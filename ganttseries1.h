#if !defined(AFX_GANTTSERIES1_H__A2050845_E605_4347_BCBB_AB5764B1DDBD__INCLUDED_)
#define AFX_GANTTSERIES1_H__A2050845_E605_4347_BCBB_AB5764B1DDBD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CPointer;
class CPen1;
class CValueList;

/////////////////////////////////////////////////////////////////////////////
// CGanttSeries wrapper class

class CGanttSeries : public COleDispatchDriver
{
public:
	CGanttSeries() {}		// Calls COleDispatchDriver default constructor
	CGanttSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CGanttSeries(const CGanttSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CPointer GetPointer();
	BOOL GetDark3D();
	void SetDark3D(BOOL bNewValue);
	long GetTransparency();
	void SetTransparency(long nNewValue);
	BOOL GetFastPoint();
	void SetFastPoint(BOOL bNewValue);
	long GetTreatNulls();
	void SetTreatNulls(long nNewValue);
	CPen1 GetConnectingPen();
	CValueList GetEndValues();
	CValueList GetStartValues();
	CValueList GetNextTask();
	long AddGantt(double AStart, double AEnd, double AY, LPCTSTR SomeLabel);
	long AddGanttColor(double AStart, double AEnd, double AY, LPCTSTR AXLabel, unsigned long Value);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GANTTSERIES1_H__A2050845_E605_4347_BCBB_AB5764B1DDBD__INCLUDED_)
