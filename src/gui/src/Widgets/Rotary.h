/*
 * Hydrogen
 * Copyright(c) 2002-2008 by Alex >Comix< Cominu [comix@users.sourceforge.net]
 *
 * http://www.hydrogen-music.org
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY, without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifndef ROTARY_H
#define ROTARY_H

#include <QtGui>
#include <QtWidgets>
#include <QSvgRenderer>

#include "WidgetWithInput.h"

#include <core/Object.h>

class Rotary : public WidgetWithInput, H2Core::Object
{
    H2_OBJECT
	
public:
	enum class Type {
		Normal,
		Center,
		Small
	};

	Rotary(const Rotary&) = delete;
	Rotary& operator=( const Rotary& rhs ) = delete;
	
	Rotary( QWidget* parent, Type type, QString sBaseTooltip, bool bUseIntSteps, float fMin = 0.0, float fMax = 1.0 );
	~Rotary();

private:
	Type m_type;
	QSvgRenderer* m_background;

	virtual void paintEvent(QPaintEvent *ev);
};
#endif
