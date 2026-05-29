#include "Fraction.h"
#include <iostream>
#include <exception>

Fraction::Fraction(int numerator, int denominator) : numerator(numerator)
{
    if (denominator == 0) throw std::exception("Can't divide by 0");
    this->denominator = denominator;
}

void Fraction::print() const
{
    std::cout << numerator << "/" << denominator;
}

Fraction Fraction::operator+(const Fraction& other) const
{
    Fraction tempThis = *this;
    Fraction tempOther = other;
    expand_to_common_denomator(tempThis, tempOther);
    return {tempThis.numerator + tempOther.numerator, tempThis.denominator};
}

void Fraction::expend_by(int const factor)
{
    if (factor == 0) throw std::exception("Can't divide by 0");
    
    numerator *= factor;
    denominator *= factor;   
}

void Fraction::expand_to_common_denomator(Fraction& first, Fraction& second)
{
    int firstDen = first.denominator;
    int secondDen = second.denominator;
    first.expend_by(secondDen);
    second.expend_by(firstDen);
}
