#include "Cricle.h"
#include <iostream>
using namespace std;
int Cricle::get_m_r() const
{
	return m_R;
}

void Cricle::set_m_r(int m_r)
{
	m_R = m_r;
}

Point Cricle::get_m_center() const
{
	return m_Center;
}

void Cricle::set_m_center(Point m_center)
{
	m_Center = m_center;
}

void Cricle::isInCricle(Cricle& c, Point& p)
{
	int distance = (c.get_m_center().get_m_x() - p.get_m_x()) ^ 2 + (c.get_m_center().get_m_y() - p.get_m_y()) ^ 2;
	int rDistance = c.get_m_r() ^ 2;

	if (distance == rDistance)
	{
		cout << "shang";

	}
	else if (distance > rDistance)
	{
		cout << "wai";

	}
	else
	{
		cout << "nei";

	}


}
