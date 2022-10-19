#pragma once
class Player : public Entity
{
    public:

        Player();
        virtual ~Player();
        virtual void OnEnter(int oldState);
        virtual void OnExecute();
        virtual void OnExit(int newState);
        virtual void OnUpdate();
        int GetX() { return m_x; }
        int GetY() { return m_y; }
        void AddX(int x);
        void AddY(int y);
        string AskName();
        int get_playerAtk();
        int get_playerDef();
    private:
        int m_x;
        int m_y;
    public:
        int m_playerAtk, m_playerDef;
};

