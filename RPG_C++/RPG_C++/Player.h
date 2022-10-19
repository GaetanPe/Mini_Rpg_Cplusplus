#pragma once
class Player
{

    public:
        Player(int x, int y);
        virtual ~Player();
        virtual void OnEnter(int oldState);
        virtual void OnExecute();
        virtual void OnExit(int newState);
        virtual void OnUpdate();
        int GetX() { return m_x; }
        int GetY() { return m_y; }
        void AddX(int x);
        void AddY(int y);
    private:
        int m_x;
        int m_y;

};

