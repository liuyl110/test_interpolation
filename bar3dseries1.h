#if !defined(AFX_BAR3DSERIES1_H__787B1C61_C1F4_4B1D_8F7A_B124D98C7AF9__INCLUDED_)
#define AFX_BAR3DSERIES1_H__787B1C61_C1F4_4B1D_8F7A_B124D98C7AF9__INCLUDED_

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
class CValueList;

/////////////////////////////////////////////////////////////////////////////
// CBar3DSeries wrapper class

class CBar3DSeries : public COleDispatchDriver
{
public:
	CBar3DSeries() {}		// Calls COleDispatchDriver default constructor
	CBar3DSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CBar3DSeries(const CBar3DSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

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
	long AddBar(double AX, double AY, double AOffset, LPCTSTR ALabel, unsigned long AColor);
	CValueList GetOffsetValues();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BAR3DSERIES1_H__787B1C61_C1F4_4B1D_8F7A_B124D98C7AF9__INCLUDED_)
