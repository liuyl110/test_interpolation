// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "funnelseries1.h"

// Dispatch interfaces referenced by this interface
#include "brush1.h"
#include "pen1.h"
#include "valuelist1.h"


/////////////////////////////////////////////////////////////////////////////
// CFunnelSeries properties

/////////////////////////////////////////////////////////////////////////////
// CFunnelSeries operations

long CFunnelSeries::AddSegment(double AQuote, double AOpportunity, LPCTSTR ALabel, unsigned long AColor)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_BSTR VTS_I4;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		AQuote, AOpportunity, ALabel, AColor);
	return result;
}

void CFunnelSeries::Recalc()
{
	InvokeHelper(0x2, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

CBrush1 CFunnelSeries::GetBrush()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CBrush1(pDispatch);
}

CPen1 CFunnelSeries::GetPen()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPen1(pDispatch);
}

CPen1 CFunnelSeries::GetLinesPen()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPen1(pDispatch);
}

BOOL CFunnelSeries::GetAutoUpdate()
{
	BOOL result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CFunnelSeries::SetAutoUpdate(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CFunnelSeries::GetQuotesSorted()
{
	BOOL result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CFunnelSeries::SetQuotesSorted(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

double CFunnelSeries::GetDifferenceLimit()
{
	double result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void CFunnelSeries::SetDifferenceLimit(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

unsigned long CFunnelSeries::GetAboveColor()
{
	unsigned long result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CFunnelSeries::SetAboveColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

unsigned long CFunnelSeries::GetWithinColor()
{
	unsigned long result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CFunnelSeries::SetWithinColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

unsigned long CFunnelSeries::GetBelowColor()
{
	unsigned long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CFunnelSeries::SetBelowColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

CValueList CFunnelSeries::GetOpportunityValues()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CValueList(pDispatch);
}

CValueList CFunnelSeries::GetQuoteValues()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CValueList(pDispatch);
}
