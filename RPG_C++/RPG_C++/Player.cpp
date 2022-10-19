#include "Framework.h"

Player::Player()
{
    m_y = 0;
    m_x = 0;

}

Player::~Player()
{
}

void Player::OnEnter(int oldState)
{
}

void Player::OnExecute()
{
}

void Player::OnExit(int newState)
{
}

void Player::OnUpdate()
{
}

void Player::AddX(int x)
{
    m_x += x;
}

void Player::AddY(int y)
{
    m_y += y;
}

string Player::AskName() {
	char name[100];
	cout << "Bienvenue, veuillez entrer votre pseudo -> ";
	cin >> name;
	 m_name = name;
	cout << m_name << " vous allez rentrer dans la salle a votre droite.\n";
	return name;
}

int Player::get_playerAtk() {
	return m_playerAtk;
}

int Player::get_playerDef() {
	return m_playerDef;
}