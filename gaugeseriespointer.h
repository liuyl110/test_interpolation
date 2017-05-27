#if !defined(AFX_GAUGESERIESPOINTER_H__3FC1A947_92F6_421C_8EC2_D0607EFDBE9D__INCLUDED_)
#define AFX_GAUGESERIESPOINTER_H__3FC1A947_92F6_421C_8EC2_D0607EFDBE9D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CBrush1;
class CPen1;
class CGradient;
class CTeeShadow;

/////////////////////////////////////////////////////////////////////////////
// CGaugeSeriesPointer wrapper class

class CGaugeSeriesPointer : public COleDispatchDriver
{
public:
	CGaugeSeriesPointer() {}		// Calls COleDispatchDriver default constructor
	CGaugeSeriesPointer(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CGaugeSeriesPointer(const CGaugeSeriesPointer& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CBrush1 GetBrush();
	BOOL GetDraw3D();
	void SetDraw3D(BOOL bNewValue);
	long GetHorizontalSize();
	void SetHorizontalSize(long nNewValue);
	long GetVerticalSize();
	void SetVerticalSize(long nNewValue);
	BOOL GetInflateMargins();
	void SetInflateMargins(BOOL bNewValue);
	CPen1 GetPen();
	long GetStyle();
	void SetStyle(long nNewValue);
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	BOOL GetDark3D();
	void SetDark3D(BOOL bNewValue);
	void DrawPointer(long DC, BOOL Is3D, long px, long py, long tmpHoriz, long tmpVert, unsigned long AColor, long AStyle);
	CGradient GetGradient();
	long GetTransparency();
	void SetTransparency(long nNewValue);
	CTeeShadow GetShadow();
	long GetGaugeStyle();
	void SetGaugeStyle(long nNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GAUGESERIESPOINTER_H__3FC1A947_92F6_421C_8EC2_D0607EFDBE9D__INCLUDED_)
