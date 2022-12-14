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
 *            ListNodeOfCPoint3D.h
 *
 *  Thu Jun 29 20:45:32 2006
 *  Copyright  2006  N. Sharjith
 *  sharjith@gmail.com
 ****************************************************************************/


#ifndef _LISTNODEOFCPOINT3D_H
#define _LISTNODEOFCPOINT3D_H

#include "VKGeom.h"

#include "Point3D.h"

//class CPoint3D;
class CListOfCPoint3D;

class VKGEOM_API CListNodeOfCPoint3D  
{
	friend class CListOfCPoint3D;
	friend class CListIteratorOfListOfCPoint3D;
public:
	CListNodeOfCPoint3D(const CPoint3D&);
	CPoint3D GetData() const;
	virtual ~CListNodeOfCPoint3D();
	bool operator==(CListNodeOfCPoint3D& rhs);
	bool operator!=(CListNodeOfCPoint3D& rhs);
private:
	CPoint3D data;
	CListNodeOfCPoint3D* nextPtr;

};

#endif /* _LISTNODEOFCPOINT3D_H */
