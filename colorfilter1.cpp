// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "colorfilter1.h"


/////////////////////////////////////////////////////////////////////////////
// CColorFilter properties

/////////////////////////////////////////////////////////////////////////////
// CColorFilter operations

long CColorFilter::GetRed()
{
	long result;
	InvokeHelper(0xc9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CColorFilter::SetRed(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xc9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CColorFilter::GetGreen()
{
	long result;
	InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CColorFilter::SetGreen(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xca, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CColorFilter::GetBlue()
{
	long result;
	InvokeHelper(0xcb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CColorFilter::SetBlue(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xcb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}
