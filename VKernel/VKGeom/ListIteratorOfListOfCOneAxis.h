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
 *            ListIteratorOfListOfCOneAxis.h
 *
 *  Thu Jun 29 20:38:18 2006
 *  Copyright  2006  N. Sharjith
 *  sharjith@gmail.com
 ****************************************************************************/


#ifndef _LISTITERATOROFLISTOFCONEAXIS_H
#define _LISTITERATOROFLISTOFCONEAXIS_H

#include "VKGeom.h"

#include "ListNodeOfCOneAxis.h"
#include "ListOfCOneAxis.h"

class VKGEOM_API CListIteratorOfListOfCOneAxis
{
	public:
	    CListIteratorOfListOfCOneAxis() {;}
	    CListIteratorOfListOfCOneAxis(CListOfCOneAxis*);
	    virtual ~CListIteratorOfListOfCOneAxis();
	    void SetList(CListOfCOneAxis*);
	    void Init();
	    bool More() const;
	    void Next();
	    COneAxis Current() const;
	    COneAxis ValueAt(const int index);
	private:
	    CListNodeOfCOneAxis* curPtr;
	    CListOfCOneAxis* theList;
};

#endif /* _LISTITERATOROFLISTOFCONEAXIS_H */
