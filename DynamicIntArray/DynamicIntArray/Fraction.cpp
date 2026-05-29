#include "Fraction.h"
#include <iostream>
#include <exception>
#include <ratio>

Fraction::Fraction(int numerator, int denominator) : numerator(numerator)
{
    if (denominator == 0) throw std::exception("Can't divide by 0");
    this->denominator = denominator;
    this->reduce();
}

void Fraction::print() const
{
    std::cout << numerator << "/" << denominator;
}

Fraction Fraction::operator+(const Fraction& other) const
{
    Fraction tempThis = *this;
    Fraction tempOther = other;
    expand_to_common_denominator(tempThis, tempOther);
    Fraction result(tempThis.numerator + tempOther.numerator, tempThis.denominator);
    result.reduce();
    return result;
}

Fraction Fraction::operator-(const Fraction& other) const
{
    Fraction tempThis = *this;
    Fraction tempOther = other;
    expand_to_common_denominator(tempThis, tempOther);
    Fraction result(tempThis.numerator - tempOther.numerator, tempThis.denominator);
    result.reduce();
    return result;
}

Fraction Fraction::operator*(const Fraction& other) const
{
    Fraction result(numerator * other.numerator, denominator * other.denominator);
    result.reduce();
    return result;
}

Fraction Fraction::operator/(const Fraction& other) const
{
    Fraction result(numerator * other.denominator, denominator * other.numerator);
    result.reduce();
    return result;  
}

void Fraction::expend_by(int const factor)
{
    if (factor == 0) throw std::exception("Can't divide by 0");
    
    numerator *= factor;
    denominator *= factor;   
}

void Fraction::expand_to_common_denominator(Fraction& first, Fraction& second)
{
    int firstDen = first.denominator;
    int secondDen = second.denominator;
    first.expend_by(secondDen);
    second.expend_by(firstDen);
}

void Fraction::reduce()
{
    int gcd = std::_Gcd(numerator, denominator);
    numerator /= gcd;  
    denominator /= gcd;
    if (denominator < 0)
    {
        numerator *= -1;
        denominator *= -1;
    }
}
