// Line3D.cpp: implementation of the CLine3D class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"

#include "Line3D.h"
#include "MMath.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CLine3D::CLine3D()
{
	cType = LINE;
}

CLine3D::CLine3D(const CPoint3D& sP, const CPoint3D& eP) : startPoint(sP), endPoint(eP)
{
	COneAxis Ax(sP, CVector3D(sP, eP));
	itsLocation = Ax;
	cType = LINE;
}

CLine3D::CLine3D(const CPoint3D& P, const CVector3D& V)
{
	CVector3D dir = V;
	CVector3D sv = dir.Unit() * -INFINITY;
	CVector3D ev = dir.Unit() * INFINITY;
	sv.SetParam(sv.GetX()+P.GetX(), sv.GetY()+P.GetY(), sv.GetZ()+P.GetZ());
	ev.SetParam(ev.GetX()+P.GetX(), ev.GetY()+P.GetY(), ev.GetZ()+P.GetZ());

	startPoint.SetParam(sv.GetX(), sv.GetY(), sv.GetZ());
	endPoint.SetParam(ev.GetX(), ev.GetY(), ev.GetZ());

	COneAxis Ax(startPoint, CVector3D(sv, ev));
	itsLocation = Ax;

	cType = LINE;
}

CLine3D::~CLine3D()
{
}

void CLine3D::Reverse()
{
	CPoint3D tPnt = startPoint;
	startPoint = endPoint;
	endPoint = tPnt;
}

CPoint3D CLine3D::PointAtPara(const double& par)
{
	double u;
	if (par < 0)
		u = 0;
	else if(par > 1)
		u = 1;
	else
		u = par;

	CPoint3D aPnt;
	//aPnt = startPoint + (endPoint - startPoint) * u;

	//(x,y) = (1-t)(x1,y1) + t(x2,y2)
	aPnt = (startPoint * (1-u)) + (endPoint * u);
	return aPnt;
}

bool CLine3D::IsClosed() const
{
	return false;
}

bool CLine3D::operator == (const CLine3D& L) const
{
	bool eq = (startPoint == L.StartPoint() && endPoint == L.EndPoint());
	return eq;
}

void CLine3D::operator = (const CLine3D& L)
{
	itsLocation = L.GetLocation();
	startPoint = L.StartPoint();
	endPoint = L.EndPoint();
}

CVector3D CLine3D::Direction() const
{
	CVector3D sv(startPoint);
	CVector3D ev(endPoint);
	CVector3D dir(sv, ev);
	return dir.Unit();
}

CVector3D CLine3D::NormalThrough(const CPoint3D& P)
{
	CPoint3D P3 = P;
	CPoint3D P1 = startPoint;
	double D = Distance(P3);
	D = 1/D;
	CVector3D N1 = Direction();
	CVector3D PV = CVector3D(P3 - P1);
	double dt = PV.Dot(N1);
	CVector3D N = (CVector3D(P3 - P1) - N1*(dt)) * D;
	return N;
}

double CLine3D::Distance(const CPoint3D& P) const
{
	CPoint3D P3 = P;
	CPoint3D P1 = startPoint;
	CPoint3D P2 = endPoint;
	double x1, y1, z1, x2, y2, z2, x3, y3, z3;
	x1 = P1.GetX(); y1 = P1.GetY(); z1 = P1.GetZ();
	x2 = P2.GetX(); y2 = P2.GetY(); z2 = P2.GetZ();
	x3 = P3.GetX(); y3 = P3.GetY(); z3 = P3.GetZ();
	double L = P1.Distance(P2);
	L = 1/L;
	double D = L * (sqrt(pow((y3-y1)*(z2-z1)-(z3-z1)*(y2-y1),2)
		                +pow((z3-z1)*(x2-x1)-(x3-x1)*(z2-z1),2)
						+pow((x3-x1)*(y2-y1)-(y3-y1)*(x2-x1),2)));
	return D;
}

void CLine3D::Translate(const COneAxis& Ax, const double& amt)
{
	CGeometry::Translate(Ax, amt);
}

void CLine3D::Translate(double dx, double dy, double dz)
{
	startPoint.Translate(dx,dy,dz);
	endPoint.Translate(dx,dy,dz);
}

void CLine3D::Translate(const CVector3D& V)
{
	startPoint.Translate(V);
	endPoint.Translate(V);
}

CCurve* CLine3D::Copy() const
{
	CLine3D* L = new CLine3D(startPoint, endPoint);
	return L;
}

void CLine3D::Translate(const CPoint3D& P1, const CPoint3D& P2)
{
	startPoint.Translate(P1, P2);
	endPoint.Translate(P1, P2);
}

void CLine3D::Rotate(const COneAxis& Ax, double ang)
{
	startPoint.Rotate(Ax, ang);
	endPoint.Rotate(Ax, ang);
}

void CLine3D::Scale(const CPoint3D& P, double fact)
{
	startPoint.Scale(P, fact);
	endPoint.Scale(P, fact);
}

void CLine3D::Mirror(const CPoint3D& P)
{
	startPoint.Mirror(P);
	endPoint.Mirror(P);
}

void CLine3D::Mirror(const COneAxis& Ax)
{
	startPoint.Mirror(Ax);
	endPoint.Mirror(Ax);
}

void CLine3D::Mirror(const CPlane& Pln)
{
	startPoint.Mirror(Pln);
	endPoint.Mirror(Pln);
}
