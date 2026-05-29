
#include <iostream>

#include "Fraction.h"
#include "Vector2D.h"

void test_fraction();
void test_vector2d();

int main(int argc, char* argv[])
{
    std::cout << "Test Fraction:\n\n";
    test_fraction();
    std::cout << "Test Vector2D:\n\n";
    test_vector2d();    
    
    return 0;
}

void test_vector2d()
{
    Vector2D a(1,2);
    Vector2D b(3,4);
    std::cout << "a: " << a << "\nb: " << b << "\n";
    
    std::cout << "a+b = " << (a+b) << "\na-b = " << (a-b) << "\n";
    a *= 2;
    b /= 5;
    std::cout << "a*=2. a = " << a << "\nb/=5. b = " << b << "\n\n";
    
    Vector2D c(0.1f, 0.1f);
    Vector2D d(0.2f, 0.2f);
    Vector2D e(0.3f, 0.3f);
    std::cout << "c: " << c << "\nd: " << d << "\ne: " << e << "\n";
    std::cout << "c+d = " << (c+d) << "\nc+d == e: " << (c+d == e ? "true" : "false") << "\n\n";
    
    std::cout << "dot(c,d) = " << dot(c,d) << "\n\n";
    
    std::cout << "c*2 = " << (c*2) << "\n"
    << "2*c = " << (2*c) << "\n";
}

void test_fraction()
{
    Fraction a(4,5);
    Fraction b(2,3);
    std::cout << "a: " << a;
    std::cout << "\nb: " << b;
    
    std::cout << "\na+b = " << (a+b);
    std::cout << "\na-b = " << (a-b);
    std::cout << "\na*b = " << (a*b);
    std::cout << "\na/b = " << (a/b) << "\n\n";
}
