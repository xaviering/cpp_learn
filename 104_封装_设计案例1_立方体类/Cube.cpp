#include "Cube.h"

int Cube::get_m_l() const
{
	return m_L;
}

void Cube::set_m_l(int m_l)
{
	m_L = m_l;
}

int Cube::get_m_w() const
{
	return m_W;
}

void Cube::set_m_w(int m_w)
{
	m_W = m_w;
}

int Cube::get_m_h() const
{
	return m_H;
}

void Cube::set_m_h(int m_h)
{
	m_H = m_h;
}

int Cube::clacylateS()
{
	return 2 * m_L + 2 * m_H + 2 * m_W;

}

Cube::Cube(int m_l, int m_w, int m_h)
{
	this->m_L = m_l;
	this->m_H = m_h;
	this->m_W = m_w;
}
