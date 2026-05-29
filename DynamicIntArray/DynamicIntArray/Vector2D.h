#pragma once
#include <iosfwd>
#include <set>
#include <tuple>

class Vector2D
{
    float x;
    float y;
public:
    Vector2D(float x, float y);
    
    Vector2D operator+(const Vector2D& other) const;
    Vector2D operator-(const Vector2D& other) const;
    Vector2D operator*(const float factor) const;
    
    void operator*=(const float factor);
    void operator/=(const float factor);
    bool operator==(const Vector2D& other) const;
    
    friend std::ostream& operator<<(std::ostream& stream, const Vector2D& vec);
    friend float dot(const Vector2D& first, const Vector2D& second);
    friend Vector2D operator*(const float factor, const Vector2D& vec);
};

