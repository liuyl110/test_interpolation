// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "axes1.h"

// Dispatch interfaces referenced by this interface
#include "axis1.h"


/////////////////////////////////////////////////////////////////////////////
// CAxes properties

/////////////////////////////////////////////////////////////////////////////
// CAxes operations

CAxis CAxes::GetLeft()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CAxis(pDispatch);
}

CAxis CAxes::GetRight()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CAxis(pDispatch);
}

CAxis CAxes::GetTop()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CAxis(pDispatch);
}

CAxis CAxes::GetBottom()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CAxis(pDispatch);
}

BOOL CAxes::GetVisible()
{
	BOOL result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CAxes::SetVisible(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CAxis CAxes::GetDepth()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CAxis(pDispatch);
}

BOOL CAxes::GetDrawAxesBeforeSeries()
{
	BOOL result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CAxes::SetDrawAxesBeforeSeries(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long CAxes::AddCustom(BOOL IsHorizontal)
{
	long result;
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		IsHorizontal);
	return result;
}

CAxis CAxes::GetCustom(long CustomAxisIndex)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, parms,
		CustomAxisIndex);
	return CAxis(pDispatch);
}

long CAxes::GetCustomCount()
{
	long result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CAxes::RemoveCustom(long CustomAxisIndex)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 CustomAxisIndex);
}

void CAxes::RemoveAllCustom()
{
	InvokeHelper(0xc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

CAxis CAxes::GetDepthTop()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xc9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CAxis(pDispatch);
}

BOOL CAxes::GetFastCalc()
{
	BOOL result;
	InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CAxes::SetFastCalc(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xca, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void CAxes::SetIsometric(long aVertical, long aHorizontal)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0xcb, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 aVertical, aHorizontal);
}

void CAxes::Hide()
{
	InvokeHelper(0xcc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL CAxes::GetBehind()
{
	BOOL result;
	InvokeHelper(0xcd, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CAxes::SetBehind(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xcd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}
