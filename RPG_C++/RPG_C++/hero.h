#pragma once
#include <iostream>
using namespace std;

class hero
{
public:
	string AskName();

public:
	string m_name = "";
	int m_hero_pv = 20;
	int m_hero_atk = 5;
	int m_hero_def = 0;
};
