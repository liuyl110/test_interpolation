#if !defined(AFX_SERIESANIMATIONTOOL1_H__E115018D_DC99_4682_985D_F5A487B59E53__INCLUDED_)
#define AFX_SERIESANIMATIONTOOL1_H__E115018D_DC99_4682_985D_F5A487B59E53__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CSeriesAnimationTool wrapper class

class CSeriesAnimationTool : public COleDispatchDriver
{
public:
	CSeriesAnimationTool() {}		// Calls COleDispatchDriver default constructor
	CSeriesAnimationTool(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CSeriesAnimationTool(const CSeriesAnimationTool& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetSeries();
	void SetSeries(const VARIANT& newValue);
	long GetDrawEvery();
	void SetDrawEvery(long nNewValue);
	BOOL GetStartAtMin();
	void SetStartAtMin(BOOL bNewValue);
	double GetStartValue();
	void SetStartValue(double newValue);
	long GetSteps();
	void SetSteps(long nNewValue);
	void Execute();
	BOOL GetRunning();
	void Stop();
	long GetDelay();
	void SetDelay(long nNewValue);
	long GetLoop();
	void SetLoop(long nNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SERIESANIMATIONTOOL1_H__E115018D_DC99_4682_985D_F5A487B59E53__INCLUDED_)
