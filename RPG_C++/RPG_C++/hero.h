#pragma once


class hero : public Entity
{
public:
	string AskName();
public:
	string m_name = "";
	int m_pv = 20;
	int m_atk = 5;
	int m_def = 2;
};
