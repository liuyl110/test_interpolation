#if !defined(AFX_SERIESMARKPOSITION1_H__2B1682A2_F9D6_4091_BD93_333959CC4453__INCLUDED_)
#define AFX_SERIESMARKPOSITION1_H__2B1682A2_F9D6_4091_BD93_333959CC4453__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CTeePoint2D;

/////////////////////////////////////////////////////////////////////////////
// CSeriesMarkPosition wrapper class

class CSeriesMarkPosition : public COleDispatchDriver
{
public:
	CSeriesMarkPosition() {}		// Calls COleDispatchDriver default constructor
	CSeriesMarkPosition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CSeriesMarkPosition(const CSeriesMarkPosition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CTeePoint2D GetArrowFrom();
	CTeePoint2D GetArrowTo();
	BOOL GetCustom();
	void SetCustom(BOOL bNewValue);
	long GetHeight();
	void SetHeight(long nNewValue);
	CTeePoint2D GetLeftTop();
	long GetWidth();
	void SetWidth(long nNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SERIESMARKPOSITION1_H__2B1682A2_F9D6_4091_BD93_333959CC4453__INCLUDED_)
