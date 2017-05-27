#if !defined(AFX_BARSERIES1_H__2E512087_E0AA_44B0_B6DD_85E2D1D1BE9A__INCLUDED_)
#define AFX_BARSERIES1_H__2E512087_E0AA_44B0_B6DD_85E2D1D1BE9A__INCLUDED_

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
// CBarSeries wrapper class

class CBarSeries : public COleDispatchDriver
{
public:
	CBarSeries() {}		// Calls COleDispatchDriver default constructor
	CBarSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CBarSeries(const CBarSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetMultiBar();
	void SetMultiBar(long nNewValue);
	BOOL GetAutoMarkPosition();
	void SetAutoMarkPosition(BOOL bNewValue);
	CBrush1 GetBarBrush();
	CPen1 GetBarPen();
	long GetBarStyle();
	void SetBarStyle(long nNewValue);
	long GetBarWidthPercent();
	void SetBarWidthPercent(long nNewValue);
	BOOL GetDark3D();
	void SetDark3D(BOOL bNewValue);
	long GetOffsetPercent();
	void SetOffsetPercent(long nNewValue);
	BOOL GetSideMargins();
	void SetSideMargins(BOOL bNewValue);
	BOOL GetUseOrigin();
	void SetUseOrigin(BOOL bNewValue);
	double GetOrigin();
	void SetOrigin(double newValue);
	long GetOriginPos(long SomeValueIndex);
	BOOL GetAutoBarSize();
	void SetAutoBarSize(BOOL bNewValue);
	void BarImageLoad(LPCTSTR FileName);
	void BarImageClear();
	CGradient GetGradient();
	long GetStackGroup();
	void SetStackGroup(long nNewValue);
	long GetConePercent();
	void SetConePercent(long nNewValue);
	CPen1 GetTickLines();
	long GetDepthPercent();
	void SetDepthPercent(long nNewValue);
	CTeeShadow GetShadow();
	long GetTransparency();
	void SetTransparency(long nNewValue);
	long GetBevelSize();
	void SetBevelSize(long nNewValue);
	long GetDarkPen();
	void SetDarkPen(long nNewValue);
	long GetBarWidth();
	void SetBarWidth(long nNewValue);
	void CalcBarBounds(long ValueIndex);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BARSERIES1_H__2E512087_E0AA_44B0_B6DD_85E2D1D1BE9A__INCLUDED_)
