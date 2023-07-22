#pragma once
#include <utility>
class Cube
{
private:
	int m_L;
	int m_W;
	int m_H;
public:
	int get_m_l() const;
	void set_m_l(int m_l);
	__declspec(property(get = get_m_l, put = set_m_l)) int ML;
	int get_m_w() const;
	void set_m_w(int m_w);
	__declspec(property(get = get_m_w, put = set_m_w)) int MW;
	int get_m_h() const;
	void set_m_h(int m_h);
	__declspec(property(get = get_m_h, put = set_m_h)) int MH;
	int clacylateS();
	Cube(int m_l, int m_w, int m_h);

	friend bool operator==(const Cube& lhs, const Cube& rhs)
	{
		return lhs.m_L == rhs.m_L
			&& lhs.m_W == rhs.m_W
			&& lhs.m_H == rhs.m_H;
	}

	friend bool operator!=(const Cube& lhs, const Cube& rhs)
	{
		return !(lhs == rhs);
	}
};
