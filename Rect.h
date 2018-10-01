#pragma once
#include "Shape.h"
#include "global.h"
#include <QObject>
class Rect :
	public QObject,public Shape
{
	Q_OBJECT
public:
	Rect();
	~Rect();
	void draw(QPainter & painter);
	bool isShot();
	void dodata_p();
	void dodata_m();
	void dodata_r();
	void doda_m_move();
	void doda_p_move();
	bool drawisOver();
	int getType();
	void save();
	void load(string data);

public:
	QPoint m_start_point, m_end_point, temp_mouse_press;
	int type;
};


