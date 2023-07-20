#include "Circle.h"
#define  PI 3.1415926
double Circle::calculateZC()
{
	return 2 * PI * m_r;
}

void Circle::set_m_r(int m_r)
{
	this->m_r = m_r;
}

int Circle::get_m_r()
{
	return m_r;

}

