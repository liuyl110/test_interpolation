#if !defined(AFX_PCXEXPORT_H__CD1E0AB1_EADD_439A_966C_F0143C825B5B__INCLUDED_)
#define AFX_PCXEXPORT_H__CD1E0AB1_EADD_439A_966C_F0143C825B5B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CPCXExport wrapper class

class CPCXExport : public COleDispatchDriver
{
public:
	CPCXExport() {}		// Calls COleDispatchDriver default constructor
	CPCXExport(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPCXExport(const CPCXExport& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetWidth();
	void SetWidth(long nNewValue);
	long GetHeight();
	void SetHeight(long nNewValue);
	void SaveToFile(LPCTSTR FileName);
	VARIANT SaveToStream();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PCXEXPORT_H__CD1E0AB1_EADD_439A_966C_F0143C825B5B__INCLUDED_)
