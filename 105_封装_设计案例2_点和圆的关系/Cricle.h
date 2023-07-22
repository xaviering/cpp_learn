#pragma once
#include "Point.h"

class Cricle
{
public:
private:
	int m_R;//半径
	Point m_Center;//圆心
public:
	int get_m_r() const;
	void set_m_r(int m_r);
	Point get_m_center() const;
	void set_m_center(Point m_center);
	void isInCricle(Cricle& c, Point& p);

};
