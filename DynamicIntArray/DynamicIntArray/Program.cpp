
#include <iostream>

#include "DynamicIntArray.h"

void test_rule_of_3();
void test_size();
void print_values(DynamicIntArray& a);

int main(int argc, char* argv[])
{
    std::cout << "Rule of 3 test:\n";
    test_rule_of_3();
    std::cout << "\n\nCapacity change test:\n";
    test_size();
    return 0;
}

void test_rule_of_3()
{
    DynamicIntArray* aPtr = new DynamicIntArray(3);
    DynamicIntArray& a = *aPtr;
    a.set(0,0);
    a.set(1,10);
    a.set(2,20);
    
    std::cout << "Created a on the heap\n";
    std::cout << "a: ";
    print_values(a);
    
    DynamicIntArray b(a);
    std::cout << "Constructed b on the stack from a\nb: ";
    print_values(b);
    
    b.set(0,100);
    b.set(3, 30);
    std::cout << "Changed b\na: ";
    print_values(a);
    std::cout << "b: ";
    print_values(b);
    
    a = b;
    std::cout << "Assigned b to a\na: ";
    print_values(a);
    std::cout << "b: ";
    print_values(b);
    
    delete aPtr;
    std::cout << "Deleted a\nb: ";
    print_values(b);
}

void test_size()
{
    std::cout << "Created DynamicIntArray with capacity 2" << "\n";
    DynamicIntArray a(2);
    print_values(a);
    a.set(0, 0);
    std::cout << "Set first and second indices" << "\n";
    print_values(a);
    a.set(1, 1);
    print_values(a);
    std::cout << "Set third index" << "\n";
    a.set(2, 2);
    print_values(a);
    
    std::cout << "Increase capacity to 10 and set values" << "\n";
    a.resize(10);
    for (size_t i = 0; i < a.size(); ++i)
    {
        a.set(i,static_cast<int>(i));
    }
    print_values(a);
    
    std::cout << "Decrease capacity to 5" << "\n";
    a.resize(5);
    print_values(a);
}

void print_values(DynamicIntArray& arr)
{
    for (size_t i = 0; i < arr.size(); ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}
