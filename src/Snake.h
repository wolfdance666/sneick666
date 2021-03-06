#pragma once

#include <deque>

#include "Point.h"

class Playground;

class Snake
{
public:
    enum Direction
    {
        NONE,
        LEFT,
        RIGHT,
        UP,
        DOWN
    };

    Snake(Playground& pg, Point const& head);
    ~Snake();

    void move();
    Point head() const;
    Point tail() const;
    Direction getDirection() const;
    void setDirection(Direction d);
    void grow();
    int getSize() const;
    bool isDead() const;
    void reset(Point const& head);

private:
    Playground& m_pg;
    std::deque<Point> m_body;
    Direction m_direction;
    Direction m_lastDirection;
    bool m_isDead;

    Point positionDelta() const;
    static Direction opposite(Direction d);
};
