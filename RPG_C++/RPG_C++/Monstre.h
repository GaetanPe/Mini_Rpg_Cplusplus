#pragma once
class Monstre : public Entity
{
public:
	Monstre();
	virtual ~Monstre();
	int GetX() { return m_x; }
	int GetY() { return m_y; }
	void AddX(int x);
	void AddY(int y);
private:
	int m_x;
	int m_y;
};