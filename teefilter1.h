#if !defined(AFX_TEEFILTER1_H__05F6F283_532A_42C0_9547_B1EDBFBE6FB0__INCLUDED_)
#define AFX_TEEFILTER1_H__05F6F283_532A_42C0_9547_B1EDBFBE6FB0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CFilterRegion;
class CResizeFilter;
class CCropFilter;
class CGrayScaleFilter;
class CMosaicFilter;
class CColorFilter;
class CHueLumSatFilter;
class CRotateFilter;
class CMirrorFilter;
class CBlurFilter;
class CBrightnessFilter;
class CContrastFilter;
class CGammaCorrectionFilter;
class CAmountFilter;
class CSharpenFilter;
class CEmbossFilter;
class CSoftenFilter;
class CTileFilter;
class CBevelFilter;
class CZoomFilter;

/////////////////////////////////////////////////////////////////////////////
// CTeeFilter wrapper class

class CTeeFilter : public COleDispatchDriver
{
public:
	CTeeFilter() {}		// Calls COleDispatchDriver default constructor
	CTeeFilter(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CTeeFilter(const CTeeFilter& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetEnabled();
	void SetEnabled(BOOL bNewValue);
	CFilterRegion GetRegion();
	CResizeFilter GetAsResize();
	CCropFilter GetAsCrop();
	CGrayScaleFilter GetAsGrayScale();
	CMosaicFilter GetAsMosaic();
	CColorFilter GetAsColor();
	CHueLumSatFilter GetAsHueLumSat();
	CRotateFilter GetAsRotate();
	CMirrorFilter GetAsMirror();
	CBlurFilter GetAsBlur();
	CBrightnessFilter GetAsBrightness();
	CContrastFilter GetAsContrast();
	CGammaCorrectionFilter GetAsGammaCorrection();
	CAmountFilter GetAsAmount();
	CSharpenFilter GetAsSharpen();
	CEmbossFilter GetAsEmboss();
	CSoftenFilter GetAsSoften();
	CTileFilter GetAsTile();
	CBevelFilter GetAsBevel();
	CZoomFilter GetAsZoom();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEEFILTER1_H__05F6F283_532A_42C0_9547_B1EDBFBE6FB0__INCLUDED_)
