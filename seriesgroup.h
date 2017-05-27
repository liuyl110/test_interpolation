#if !defined(AFX_SERIESGROUP_H__6E6ED6C3_0042_49AF_BD96_35B15DB404CB__INCLUDED_)
#define AFX_SERIESGROUP_H__6E6ED6C3_0042_49AF_BD96_35B15DB404CB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CSeriesGroup wrapper class

class CSeriesGroup : public COleDispatchDriver
{
public:
	CSeriesGroup() {}		// Calls COleDispatchDriver default constructor
	CSeriesGroup(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CSeriesGroup(const CSeriesGroup& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void Add(long SeriesIndex);
	void Hide();
	void Show();
	long GetActive();
	void SetActive(long nNewValue);
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	VARIANT GetSeriesCount();
	long GetGroupLink();
	void Delete(long Index);
	void Insert(long IndexInGroup, long SeriesIndex);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SERIESGROUP_H__6E6ED6C3_0042_49AF_BD96_35B15DB404CB__INCLUDED_)
