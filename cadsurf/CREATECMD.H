#ifndef _CreateCmd_h_
#define _CreateCmd_h_

//#include "base.h"
class CPoint3D;

#ifdef __cplusplus

///////////////////////////////////////////////////////////////
/*	
 *	CCreateLine
 */
class CCreateLine : public CCommand
{
private:
	CPoint3D m_begin;	// 直线的起点
	CPoint3D m_end;		// 直线的终点 
	class CGLCurve* m_pTmpLine;
	
public:
	CCreateLine() ;
	~CCreateLine() ;

	int		GetType();
	int		OnLButtonDown(UINT nFlags, const CPoint3D& pos) ;
	int		OnMouseMove(UINT nFlags, const CPoint3D& pos) ;
	int		OnRButtonDown(UINT nFlags, const CPoint3D& pos);
	int		OnLButtonDblClk(UINT nFlags, const CPoint3D& pos);
	int		Cancel() ;
} ;



// /*
//  *	CCreatePolygon
//  */
// class CCreatePolygon : public CCommand
// {
// private:
// 	Position m_begin;	// 直线的起点
// 	Position m_end;		// 直线的终点 
// 	Position *m_pPositions;
// public:
// 	CCreatePolygon() ;
// 	~CCreatePolygon() ;
// 
// 	int		GetType();
// 	int		OnLButtonDown(UINT nFlags, const Position& pos) ;
// 	int		OnMouseMove(UINT nFlags, const Position& pos) ;
// 	int		OnRButtonDown(UINT nFlags, const Position& pos);
// 	int		OnLButtonDblClk(UINT nFlags, const Position& pos);
// 	int		Cancel() ;
// } ;
// 
// ///////////////////////////////////////////////////////////////
// /*	
//  *	CCreateRect
//  */
// class CCreateRect : public CCommand
// {
// private:
// 	Position m_LeftTop;
// 	Position m_RightBottom;
// public:
// 	CCreateRect() ;
// 	~CCreateRect() ;
// 
// 	int		GetType();
// 	int		OnLButtonDown(UINT nFlags, const Position& pos) ;
// 	int		OnMouseMove(UINT nFlags, const Position& pos) ;
// 	int		OnRButtonDown(UINT nFlags, const Position& pos) ;
// 
// 	int		Cancel() ;
// } ;
// 
// 
// ///////////////////////////////////////////////////////////////
// /*	
//  *	CCreateText
//  */
// class CCreateText : public CCommand
// {
// private:
// 	Position m_LeftTop;
// 	Position m_RightBottom;
// public:
// 	CCreateText() ;
// 	~CCreateText() ;
// 
// 	int		GetType();
// 	int		OnLButtonDown(UINT nFlags, const Position& pos) ;
// 	int		OnMouseMove(UINT nFlags, const Position& pos) ;
// 	int		OnRButtonDown(UINT nFlags, const Position& pos) ;
// 	int		OnLButtonDblClk(UINT nFlags, const Position& pos) ;
// 
// 	int		Cancel() ;
// } ;
// ///////////////////////////////////////////////////////////////
// ///////////////////////////////////////////////////////////////
// /*	
//  *	CCreateBlock
//  */
// class CCreateBlock : public CCommand
// {
// private:
// 	Position m_LeftTop;
// 	Position m_RightBottom;
// public:
// 	CCreateBlock() ;
// 	~CCreateBlock() ;
// 
// 	int		GetType();
// 	int		OnLButtonDown(UINT nFlags, const Position& pos) ;
// 	int		OnMouseMove(UINT nFlags, const Position& pos) ;
// 	int		OnRButtonDown(UINT nFlags, const Position& pos) ;
// 	int		OnLButtonDblClk(UINT nFlags, const Position& pos) ;
// 
// 	int		Cancel() ;
// } ;
// ///////////////////////////////////////////////////////////////
// /*	
//  *	CCreateArc
//  */
// class CCreateCircle : public CCommand
// {
// private:
// 	Position	m_center ;
// 	Position	m_pos ;
// public:
// 	CCreateCircle() ;
// 	~CCreateCircle() ;
// 
// 	int		GetType();
// 	int		OnLButtonDown(UINT nFlags, const Position& pos) ;
// 	int		OnMouseMove(UINT nFlags, const Position& pos) ;
// 	int		OnRButtonDown(UINT nFlags, const Position& pos) ;
// 
// 	int		Cancel() ;
// } ;
// 
// ///////////////////////////////////////////////////////////////
// /*	
//  *	CCreateEllipse
//  */
// class CCreateEllipse : public CCommand
// {
// private:
// 	Position	m_LeftTop ;
// 	Position	m_RightBottum ;
// public:
// 	CCreateEllipse() ;
// 	~CCreateEllipse() ;
// 
// 	int		GetType();
// 	int		OnLButtonDown(UINT nFlags, const Position& pos) ;
// 	int		OnMouseMove(UINT nFlags, const Position& pos) ;
// 	int		OnRButtonDown(UINT nFlags, const Position& pos) ;
// 
// 	int		Cancel() ;
// } ;
// 
// ///////////////////////////////////////////////////////////////
// ///////////////////////////////////////////////////////////////
// /*	
//  *	CCreateArc
//  */
// class CCreateArc : public CCommand
// {
// private:
// 	Position m_center;
// 	Position m_begin;
// 	Position m_end ;
// public:
// 	CCreateArc() ;
// 	~CCreateArc() ;
// 
// 	int		GetType();
// 	int		OnLButtonDown(UINT nFlags, const Position& pos) ;
// 	int		OnMouseMove(UINT nFlags, const Position& pos) ;
// 	int		OnRButtonDown(UINT nFlags, const Position& pos) ;
// 
// 	int		Cancel() ;
// } ;
// 
// ///////////////////////////////////////////////////////////////
// /*	
//  *	CCreateFitCurve
//  */
// class CCreateFitCurve : public CCommand
// {
// private:
// 	Position m_begin;	// 直线的起点
// 	Position m_end;		// 直线的终点 
// 	Position *m_pPositions;
// 
// 	int m_nCmd;
// public:
// 	CCreateFitCurve(UINT nCmd) ;
// 	~CCreateFitCurve() ;
// 
// 	int		GetType();
// 	int		OnLButtonDown(UINT nFlags, const Position& pos) ;
// 	int		OnMouseMove(UINT nFlags, const Position& pos) ;
// 	int		OnRButtonDown(UINT nFlags, const Position& pos);
// 	int		OnLButtonDblClk(UINT nFlags, const Position& pos);
// 	int		Cancel() ;
// } ;

#endif // #ifdef __cplusplus

#endif