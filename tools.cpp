// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "tools.h"

// Dispatch interfaces referenced by this interface
#include "cursortool.h"
#include "dragmarkstool.h"
#include "axisarrowtool.h"
#include "drawlinetool.h"
#include "nearesttool.h"
#include "colorbandtool.h"
#include "colorlinetool.h"
#include "rotatetool.h"
#include "markstiptool.h"
#include "chartimagetool.h"
#include "annotationtool.h"
#include "pagenumtool.h"
#include "gridtransposetool.h"
#include "extralegendtool.h"
#include "seriesanimationtool.h"
#include "gantttool.h"
#include "gridbandtool.h"
#include "pietool.h"
#include "dragpointtool.h"
#include "legendscrollbartool.h"
#include "lighttool.h"
#include "surfacenearesttool.h"
#include "axisscrolltool.h"
#include "SeriesBandTool.h"
#include "selectortool.h"
#include "rectangletool.h"
#include "datatabletool.h"
#include "videotool.h"
#include "videoplayertool.h"
#include "transposeseriestool.h"
#include "seriesregiontool.h"
#include "antialiastool.h"
#include "clipseriestool.h"
#include "fadertool.h"
#include "frametool.h"
#include "magnifytool.h"
#include "legendpalettetool.h"
#include "bannertool.h"
#include "text3dtool.h"
#include "seriesstatstool.h"
#include "linktool.h"
#include "fibonaccitool.h"


/////////////////////////////////////////////////////////////////////////////
// CTools properties

/////////////////////////////////////////////////////////////////////////////
// CTools operations

CCursorTool CTools::GetAsTeeCursor()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CCursorTool(pDispatch);
}

CDragMarksTool CTools::GetAsDragMarks()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CDragMarksTool(pDispatch);
}

CAxisArrowTool CTools::GetAsAxisArrow()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CAxisArrowTool(pDispatch);
}

CDrawLineTool CTools::GetAsDrawLine()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CDrawLineTool(pDispatch);
}

CNearestTool CTools::GetAsNearest()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CNearestTool(pDispatch);
}

CColorBandTool CTools::GetAsColorband()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CColorBandTool(pDispatch);
}

CColorLineTool CTools::GetAsColorLine()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CColorLineTool(pDispatch);
}

CRotateTool CTools::GetAsRotate()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CRotateTool(pDispatch);
}

CMarksTipTool CTools::GetAsMarksTip()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CMarksTipTool(pDispatch);
}

CChartImageTool CTools::GetAsChartImage()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CChartImageTool(pDispatch);
}

CAnnotationTool CTools::GetAsAnnotation()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CAnnotationTool(pDispatch);
}

CPageNumTool CTools::GetAsPageNum()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPageNumTool(pDispatch);
}

BOOL CTools::GetActive()
{
	BOOL result;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CTools::SetActive(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString CTools::GetDescription()
{
	CString result;
	InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CTools::GetToolType()
{
	long result;
	InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CTools::ShowEditor()
{
	InvokeHelper(0xc9, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

CGridTransposeTool CTools::GetAsGridTranspose()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CGridTransposeTool(pDispatch);
}

CExtraLegendTool CTools::GetAsExtraLegend()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xcb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CExtraLegendTool(pDispatch);
}

CSeriesAnimationTool CTools::GetAsSeriesAnimation()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xcc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CSeriesAnimationTool(pDispatch);
}

CGanttTool CTools::GetAsGantt()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xcd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CGanttTool(pDispatch);
}

CGridBandTool CTools::GetAsGridBand()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xce, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CGridBandTool(pDispatch);
}

CPieTool CTools::GetAsPie()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xcf, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPieTool(pDispatch);
}

CDragPointTool CTools::GetAsDragPoint()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xd0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CDragPointTool(pDispatch);
}

CLegendScrollBarTool CTools::GetAsLegendScrollBar()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xd1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CLegendScrollBarTool(pDispatch);
}

CLightTool CTools::GetAsLight()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xd2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CLightTool(pDispatch);
}

CSurfaceNearestTool CTools::GetAsSurfaceNearest()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xd3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CSurfaceNearestTool(pDispatch);
}

CAxisScrollTool CTools::GetAsAxisScroll()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xd4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CAxisScrollTool(pDispatch);
}

CSeriesBandTool CTools::GetAsSeriesBand()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xd5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CSeriesBandTool(pDispatch);
}

CSelectorTool CTools::GetAsSelector()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xd6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CSelectorTool(pDispatch);
}

CRectangleTool CTools::GetAsRectangle()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xd7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CRectangleTool(pDispatch);
}

BOOL CTools::GetShowInEditor()
{
	BOOL result;
	InvokeHelper(0xd8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CTools::SetShowInEditor(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xd8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CDataTableTool CTools::GetAsDataTable()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xd9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CDataTableTool(pDispatch);
}

CVideoTool CTools::GetAsVideo()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xda, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CVideoTool(pDispatch);
}

CVideoPlayerTool CTools::GetAsVideoPlayer()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xdb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CVideoPlayerTool(pDispatch);
}

CTransposeSeriesTool CTools::GetAsTransposeSeries()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xdc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CTransposeSeriesTool(pDispatch);
}

CSeriesRegionTool CTools::GetAsSeriesRegion()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xdd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CSeriesRegionTool(pDispatch);
}

CAntiAliasTool CTools::GetAsAntiAlias()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xde, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CAntiAliasTool(pDispatch);
}

CClipSeriesTool CTools::GetAsClipSeries()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xdf, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CClipSeriesTool(pDispatch);
}

CFaderTool CTools::GetAsFader()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xe0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CFaderTool(pDispatch);
}

CFrameTool CTools::GetAsFrame()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xe1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CFrameTool(pDispatch);
}

CMagnifyTool CTools::GetAsMagnify()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xe2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CMagnifyTool(pDispatch);
}

CLegendPaletteTool CTools::GetAsLegendPalette()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xe3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CLegendPaletteTool(pDispatch);
}

CBannerTool CTools::GetAsBanner()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xe4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CBannerTool(pDispatch);
}

CText3DTool CTools::GetAsText3D()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xe5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CText3DTool(pDispatch);
}

CSeriesStatsTool CTools::GetAsSeriesStats()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xe6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CSeriesStatsTool(pDispatch);
}

CLinkTool CTools::GetAsLink()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xe7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CLinkTool(pDispatch);
}

CFibonacciTool CTools::GetAsFibonacci()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xe8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CFibonacciTool(pDispatch);
}
