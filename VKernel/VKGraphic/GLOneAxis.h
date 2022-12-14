/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
 
/***************************************************************************
 *            GLOneAxis.h
 *
 *  Thu Jun 29 22:57:58 2006
 *  Copyright  2006  N. Sharjith
 *  sharjith@gmail.com
 ****************************************************************************/


#ifndef _GLONEAXIS_H
#define _GLONEAXIS_H

#include "VKGraphic.h"

#include "GLObject.h"
#include <OneAxis.h>
#include <AxisSystem.h>
#include <Point3D.h>

class VKGRAPHIC_API CGLOneAxis : public CGLObject  
{
public:
	CGLOneAxis(const COneAxis& Ax, const int& length = 100, const int& arrow = 10);
	virtual ~CGLOneAxis();
	virtual CGLObject* Copy() const;
	virtual void DefineDisplay();
	virtual void Display(const GLDisplayMode& = GLWIREFRAME);
	virtual void Hilight(const GLDisplayMode&);
	void SetLength(const int& len) { itsLength = len; }
	void SetArrowSize(const int& arr) { itsArrow = arr; }
	COneAxis GetAxis() const { return itsAxis; }
	int GetLength() const { return itsLength; }
	int GetArrowSize() const { return itsArrow; }
	void ComputeBoundLimits();
	virtual CGeometry* Geometry() const;
private:
	void DrawArrow(const COneAxis& theAxis);
private:
	COneAxis itsAxis;
	int itsLength;
	int itsArrow;
};

#endif /* _GLONEAXIS_H */
