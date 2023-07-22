#pragma once

class Point
{
public:
private:
	int m_X;

public:
	int get_m_x() const;
	void set_m_x(int m_x);
	__declspec(property(get = get_m_x, put = set_m_x)) int MX;
	int get_m_y() const;
	void set_m_y(int m_y);
	__declspec(property(get = get_m_y, put = set_m_y)) int MY;

private:
	int	m_Y;
};
