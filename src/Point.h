#pragma once

class Point
{
public:
    Point();
    Point(int x, int y);
    Point operator+(Point const& other);
    Point operator-(Point const& other);
    bool operator==(Point const& other) const;
    bool operator!=(Point const& other) const;
    int x;
    int y;
};
