// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "fibonacciitem1.h"

// Dispatch interfaces referenced by this interface
#include "pen1.h"


/////////////////////////////////////////////////////////////////////////////
// CFibonacciItem properties

/////////////////////////////////////////////////////////////////////////////
// CFibonacciItem operations

CPen1 CFibonacciItem::GetPen()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xc9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPen1(pDispatch);
}

double CFibonacciItem::GetValue()
{
	double result;
	InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void CFibonacciItem::SetValue(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0xca, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}
