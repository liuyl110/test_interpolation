#if !defined(AFX_MAGNIFYTOOL_H__5F5DE68B_A1FF_484C_8044_E3336E9AFDF8__INCLUDED_)
#define AFX_MAGNIFYTOOL_H__5F5DE68B_A1FF_484C_8044_E3336E9AFDF8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CTeeShapePanel;
class CAnnotationCallout;
class CBrush1;

/////////////////////////////////////////////////////////////////////////////
// CMagnifyTool wrapper class

class CMagnifyTool : public COleDispatchDriver
{
public:
	CMagnifyTool() {}		// Calls COleDispatchDriver default constructor
	CMagnifyTool(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMagnifyTool(const CMagnifyTool& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetPosition();
	void SetPosition(long nNewValue);
	CTeeShapePanel GetShape();
	CString GetText();
	void SetText(LPCTSTR lpszNewValue);
	CAnnotationCallout GetCallout();
	long GetTextAlignment();
	void SetTextAlignment(long nNewValue);
	BOOL Clicked(long X, long Y);
	long GetWidth();
	void SetWidth(long nNewValue);
	long GetHeight();
	void SetHeight(long nNewValue);
	short GetCursor();
	void SetCursor(short nNewValue);
	long GetLeft();
	void SetLeft(long nNewValue);
	long GetTop();
	void SetTop(long nNewValue);
	BOOL GetAutoSize();
	void SetAutoSize(BOOL bNewValue);
	CBrush1 GetBrush();
	// method 'GetBounds' not emitted because of invalid return type or parameter type
	void SetBounds(long Left, long Top, long Right, long Bottom);
	long GetPositionUnits();
	void SetPositionUnits(long nNewValue);
	BOOL GetDragging();
	BOOL GetResizing();
	long ClickedEdge(long X, long Y);
	BOOL GetAllowDrag();
	void SetAllowDrag(BOOL bNewValue);
	BOOL GetAllowResize();
	void SetAllowResize(BOOL bNewValue);
	BOOL GetCircled();
	void SetCircled(BOOL bNewValue);
	BOOL GetFollowMouse();
	void SetFollowMouse(BOOL bNewValue);
	double GetPercent();
	void SetPercent(double newValue);
	BOOL GetSmooth();
	void SetSmooth(BOOL bNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAGNIFYTOOL_H__5F5DE68B_A1FF_484C_8044_E3336E9AFDF8__INCLUDED_)
