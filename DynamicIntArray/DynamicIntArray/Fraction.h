#pragma once

class Fraction
{
    int numerator;
    int denominator;
public:
    Fraction(int numerator, int denominator);
    void print() const;
    static void expand_to_common_denomator(Fraction& first, Fraction& second);

    Fraction operator+(const Fraction& other) const;
    void expend_by(int factor);
};
