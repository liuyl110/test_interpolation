#if !defined(AFX_TEXT3DTOOL1_H__E46FF115_68C5_41D0_B77A_0D410DFA73ED__INCLUDED_)
#define AFX_TEXT3DTOOL1_H__E46FF115_68C5_41D0_B77A_0D410DFA73ED__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CTeeFont;
class CFloatXYZ;

/////////////////////////////////////////////////////////////////////////////
// CText3DTool wrapper class

class CText3DTool : public COleDispatchDriver
{
public:
	CText3DTool() {}		// Calls COleDispatchDriver default constructor
	CText3DTool(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CText3DTool(const CText3DTool& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetAngle();
	void SetAngle(double newValue);
	CTeeFont GetFont();
	CFloatXYZ GetPosition();
	CFloatXYZ GetRotation();
	CString GetText();
	void SetText(LPCTSTR lpszNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEXT3DTOOL1_H__E46FF115_68C5_41D0_B77A_0D410DFA73ED__INCLUDED_)
