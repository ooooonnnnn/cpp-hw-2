#include "Vector2D.h"
#include <iostream>

Vector2D::Vector2D(float x, float y) : x(x), y(y)
{
}

Vector2D Vector2D::operator+(const Vector2D& other) const
{
    return {x + other.x, y + other.y};
}

Vector2D Vector2D::operator-(const Vector2D& other) const
{
    return {x - other.x, y - other.y};
}

void Vector2D::operator*=(const float factor)
{
    this->x *= factor;
    this->y *= factor;
}

void Vector2D::operator/=(const float factor)
{
    if (factor == 0) throw std::exception("Can't divide by 0");
    float invFactor = 1 / factor;
    this->x *= invFactor;
    this->y *= invFactor;
}

bool Vector2D::operator==(const Vector2D& other) const
{
    float epsilon = std::numeric_limits<float>::epsilon();
    return std::abs(x - other.x) < epsilon
    && std::abs(y - other.y) < epsilon;
}

std::ostream& operator<<(std::ostream& stream, const Vector2D& vec)
{
    stream << "(" << vec.x << ", " << vec.y << ")";
    return stream;
}
