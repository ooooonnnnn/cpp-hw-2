#pragma once
#include <iosfwd>

class Fraction
{
    int numerator;
    int denominator;
public:
    Fraction(int numerator, int denominator);
    static void expand_to_common_denominator(Fraction& first, Fraction& second);
    void reduce();

    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;
    void expend_by(int factor);
    
    friend std::ostream& operator<<(std::ostream& stream, const Fraction& frac);
};
