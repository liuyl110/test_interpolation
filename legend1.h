#if !defined(AFX_LEGEND1_H__1654AB24_5D45_4DC7_96B5_70ACEF05191B__INCLUDED_)
#define AFX_LEGEND1_H__1654AB24_5D45_4DC7_96B5_70ACEF05191B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CTeeFont;
class CGradient;
class CTeeRect;
class CTeeShadow;
class CPen1;
class CBackImage;
class CBrush1;
class CLegendSymbol;
class CLegendTitle;
class CLegendItem;
class CLegendItems;

/////////////////////////////////////////////////////////////////////////////
// CLegend wrapper class

class CLegend : public COleDispatchDriver
{
public:
	CLegend() {}		// Calls COleDispatchDriver default constructor
	CLegend(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CLegend(const CLegend& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	unsigned long GetColor();
	void SetColor(unsigned long newValue);
	CTeeFont GetFont();
	CGradient GetGradient();
	long GetShadowSize();
	void SetShadowSize(long nNewValue);
	unsigned long GetShadowColor();
	void SetShadowColor(unsigned long newValue);
	BOOL GetTransparent();
	void SetTransparent(BOOL bNewValue);
	long GetShapeStyle();
	void SetShapeStyle(long nNewValue);
	long GetTransparency();
	void SetTransparency(long nNewValue);
	CTeeRect GetShapeBounds();
	long GetBevel();
	void SetBevel(long nNewValue);
	long GetBevelWidth();
	void SetBevelWidth(long nNewValue);
	void ShowEditorShape();
	CTeeShadow GetShadow();
	long GetRoundSize();
	void SetRoundSize(long nNewValue);
	CPen1 GetPen();
	CBackImage GetPicture();
	void Show();
	void Hide();
	BOOL GetCustomPosition();
	void SetCustomPosition(BOOL bNewValue);
	long GetLeft();
	void SetLeft(long nNewValue);
	long GetTop();
	void SetTop(long nNewValue);
	long GetAlignment();
	void SetAlignment(long nNewValue);
	long GetColorWidth();
	void SetColorWidth(long nNewValue);
	CPen1 GetDividingLines();
	long GetFirstValue();
	void SetFirstValue(long nNewValue);
	CPen1 GetFrame();
	long GetHorizMargin();
	void SetHorizMargin(long nNewValue);
	BOOL GetInverted();
	void SetInverted(BOOL bNewValue);
	long GetLegendStyle();
	void SetLegendStyle(long nNewValue);
	BOOL GetResizeChart();
	void SetResizeChart(BOOL bNewValue);
	long GetTextStyle();
	void SetTextStyle(long nNewValue);
	long GetTopPos();
	void SetTopPos(long nNewValue);
	long GetVertMargin();
	void SetVertMargin(long nNewValue);
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	CString Formatted(long SomeSeriesOrValueIndex);
	CString FormattedValue(long aSeries, long SomeValueIndex);
	long Clicked(long X, long Y);
	long GetMaxNumRows();
	void SetMaxNumRows(long nNewValue);
	void BackImageLoad(LPCTSTR FileName);
	void BackImageClear();
	CBrush1 GetBrush();
	VARIANT GetSeries();
	void SetSeries(const VARIANT& newValue);
	void DrawLegend();
	BOOL GetFontSeriesColor();
	void SetFontSeriesColor(BOOL bNewValue);
	BOOL GetCurrentPage();
	void SetCurrentPage(BOOL bNewValue);
	CLegendSymbol GetSymbol();
	BOOL GetCheckBoxes();
	void SetCheckBoxes(BOOL bNewValue);
	BOOL GetColumnWidthAuto();
	void SetColumnWidthAuto(BOOL bNewValue);
	long GetColumnWidths(long Index);
	void SetColumnWidths(long Index, long nNewValue);
	long GetVertspacing();
	void SetVertspacing(long nNewValue);
	BOOL GetVertical();
	void ShowEditorLegend();
	CLegendTitle GetTitle();
	long GetCheckBoxesStyle();
	void SetCheckBoxesStyle(long nNewValue);
	long GetLastValue();
	long GetPositionUnits();
	void SetPositionUnits(long nNewValue);
	long GetLeftPercent();
	void SetLeftPercent(long nNewValue);
	long GetTopPercent();
	void SetTopPercent(long nNewValue);
	CLegendItem GetItem(long Index);
	CLegendItems GetItems();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LEGEND1_H__1654AB24_5D45_4DC7_96B5_70ACEF05191B__INCLUDED_)
