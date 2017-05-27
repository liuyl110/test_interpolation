// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "printersettings1.h"


/////////////////////////////////////////////////////////////////////////////
// CPrinterSettings properties

/////////////////////////////////////////////////////////////////////////////
// CPrinterSettings operations

short CPrinterSettings::GetOrientation()
{
	short result;
	InvokeHelper(0xc9, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetOrientation(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xc9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

short CPrinterSettings::GetPaperSize()
{
	short result;
	InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetPaperSize(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xca, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

short CPrinterSettings::GetPaperLength()
{
	short result;
	InvokeHelper(0xcb, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetPaperLength(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xcb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

short CPrinterSettings::GetPaperWidth()
{
	short result;
	InvokeHelper(0xcc, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetPaperWidth(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xcc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

short CPrinterSettings::GetCopies()
{
	short result;
	InvokeHelper(0xcd, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetCopies(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xcd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

short CPrinterSettings::GetPrintQuality()
{
	short result;
	InvokeHelper(0xce, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetPrintQuality(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xce, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

short CPrinterSettings::GetColor()
{
	short result;
	InvokeHelper(0xcf, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetColor(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xcf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

short CPrinterSettings::GetDuplex()
{
	short result;
	InvokeHelper(0xd0, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetDuplex(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xd0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

short CPrinterSettings::GetScale()
{
	short result;
	InvokeHelper(0xd1, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetScale(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xd1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

short CPrinterSettings::GetDefaultSource()
{
	short result;
	InvokeHelper(0xd2, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetDefaultSource(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xd2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

short CPrinterSettings::GetTTOption()
{
	short result;
	InvokeHelper(0xd3, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetTTOption(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xd3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

short CPrinterSettings::GetCollate()
{
	short result;
	InvokeHelper(0xd4, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetCollate(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xd4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CPrinterSettings::GetSpecVersion()
{
	long result;
	InvokeHelper(0xd5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetSpecVersion(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CPrinterSettings::GetDriverVersion()
{
	long result;
	InvokeHelper(0xd6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetDriverVersion(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CPrinterSettings::GetSize()
{
	long result;
	InvokeHelper(0xd7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetSize(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CPrinterSettings::GetDriverExtra()
{
	long result;
	InvokeHelper(0xd8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetDriverExtra(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CPrinterSettings::GetLogPixels()
{
	long result;
	InvokeHelper(0xd9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetLogPixels(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CPrinterSettings::GetFields()
{
	long result;
	InvokeHelper(0xda, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetFields(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xda, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CPrinterSettings::GetBitsPerPel()
{
	long result;
	InvokeHelper(0xdb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetBitsPerPel(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xdb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CPrinterSettings::GetPelsWidth()
{
	long result;
	InvokeHelper(0xdc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetPelsWidth(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xdc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CPrinterSettings::GetPelsHeight()
{
	long result;
	InvokeHelper(0xdd, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetPelsHeight(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xdd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CPrinterSettings::GetDisplayFlags()
{
	long result;
	InvokeHelper(0xde, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetDisplayFlags(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xde, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CPrinterSettings::GetDisplayFrequency()
{
	long result;
	InvokeHelper(0xdf, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetDisplayFrequency(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xdf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CPrinterSettings::GetICMMethod()
{
	long result;
	InvokeHelper(0xe0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetICMMethod(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xe0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CPrinterSettings::GetICMIntent()
{
	long result;
	InvokeHelper(0xe1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetICMIntent(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xe1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

short CPrinterSettings::GetYResolution()
{
	short result;
	InvokeHelper(0xe2, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetYResolution(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xe2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString CPrinterSettings::GetDeviceName()
{
	CString result;
	InvokeHelper(0xe3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetDeviceName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xe3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString CPrinterSettings::GetFormName()
{
	CString result;
	InvokeHelper(0xe4, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CPrinterSettings::SetFormName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xe4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}
