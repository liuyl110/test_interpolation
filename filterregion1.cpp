// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "filterregion1.h"


/////////////////////////////////////////////////////////////////////////////
// CFilterRegion properties

/////////////////////////////////////////////////////////////////////////////
// CFilterRegion operations

void CFilterRegion::SetRectangle(long Left, long Top, long Right, long Bottom)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0xc9, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Left, Top, Right, Bottom);
}

long CFilterRegion::GetHeight()
{
	long result;
	InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CFilterRegion::SetHeight(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xca, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CFilterRegion::GetLeft()
{
	long result;
	InvokeHelper(0xcb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CFilterRegion::SetLeft(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xcb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CFilterRegion::GetTop()
{
	long result;
	InvokeHelper(0xcc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CFilterRegion::SetTop(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xcc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CFilterRegion::GetWidth()
{
	long result;
	InvokeHelper(0xcd, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CFilterRegion::SetWidth(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xcd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}
