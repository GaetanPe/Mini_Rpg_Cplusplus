#include "Framework.h"

Player::Player(int x, int y)
{
    m_y = y;
    m_x = x;
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