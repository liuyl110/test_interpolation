// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "surfacenearesttool1.h"


/////////////////////////////////////////////////////////////////////////////
// CSurfaceNearestTool properties

/////////////////////////////////////////////////////////////////////////////
// CSurfaceNearestTool operations

VARIANT CSurfaceNearestTool::GetSeries()
{
	VARIANT result;
	InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void CSurfaceNearestTool::SetSeries(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xe, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

unsigned long CSurfaceNearestTool::GetCellColor()
{
	unsigned long result;
	InvokeHelper(0xc9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CSurfaceNearestTool::SetCellColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xc9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

unsigned long CSurfaceNearestTool::GetColumnColor()
{
	unsigned long result;
	InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CSurfaceNearestTool::SetColumnColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xca, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

unsigned long CSurfaceNearestTool::GetRowColor()
{
	unsigned long result;
	InvokeHelper(0xcb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CSurfaceNearestTool::SetRowColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xcb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long CSurfaceNearestTool::GetSelectedCell()
{
	long result;
	InvokeHelper(0x12d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CSurfaceNearestTool::SetSelectedCell(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x12d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CSurfaceNearestTool::GetRow()
{
	long result;
	InvokeHelper(0x12e, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CSurfaceNearestTool::GetCol()
{
	long result;
	InvokeHelper(0x12f, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}
