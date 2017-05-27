#if !defined(AFX_POLARBARSERIES_H__ECF8E53E_A12D_498C_8A7F_ED71019E9FC0__INCLUDED_)
#define AFX_POLARBARSERIES_H__ECF8E53E_A12D_498C_8A7F_ED71019E9FC0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CTeePoint2D;
class CPen1;
class CPointer;
class CValueList;
class CCircleLabels;
class CBrush1;
class CGradient;

/////////////////////////////////////////////////////////////////////////////
// CPolarBarSeries wrapper class

class CPolarBarSeries : public COleDispatchDriver
{
public:
	CPolarBarSeries() {}		// Calls COleDispatchDriver default constructor
	CPolarBarSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPolarBarSeries(const CPolarBarSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetXRadius();
	void SetXRadius(long nNewValue);
	long GetYRadius();
	void SetYRadius(long nNewValue);
	long GetXCenter();
	long GetYCenter();
	long GetCircleWidth();
	long GetCircleHeight();
	unsigned long GetCircleBackColor();
	void SetCircleBackColor(unsigned long newValue);
	BOOL GetCircled();
	void SetCircled(BOOL bNewValue);
	long GetRotationAngle();
	void SetRotationAngle(long nNewValue);
	CTeePoint2D AngleToPoint(double Angle, double AXRadius, double AYRadius);
	double PointToAngle(long XCoord, long YCoord);
	double PointToRadius(long XCoord, long YCoord);
	double GetAngleIncrement();
	void SetAngleIncrement(double newValue);
	BOOL GetCloseCircle();
	void SetCloseCircle(BOOL bNewValue);
	CPen1 GetPen();
	CPointer GetPointer();
	double GetRadiusIncrement();
	void SetRadiusIncrement(double newValue);
	CValueList GetAngleValues();
	CValueList GetRadiusValues();
	void DrawRing(double Value, long Z);
	CPen1 GetCirclePen();
	CCircleLabels GetCircleLabels();
	CBrush1 GetBrush();
	void LoadBackImage(LPCTSTR FileName);
	void ClearBackImage();
	BOOL GetClockWiseLabels();
	void SetClockWiseLabels(BOOL bNewValue);
	BOOL GetCircleLabelsInside();
	void SetCircleLabelsInside(BOOL bNewValue);
	long GetTransparency();
	void SetTransparency(long nNewValue);
	CGradient GetCircleGradient();
	void DrawZone(double Min, double Max, long Z);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_POLARBARSERIES_H__ECF8E53E_A12D_498C_8A7F_ED71019E9FC0__INCLUDED_)
