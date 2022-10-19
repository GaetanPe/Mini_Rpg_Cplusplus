#pragma once
class Monstre : public Entity
{
public:
	Monstre(int x, int y);
	virtual ~Monstre();
	int GetX() { return m_x; }
	int GetY() { return m_y; }
private:
	int m_x;
	int m_y;
};