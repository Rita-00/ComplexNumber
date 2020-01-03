#include <iostream>
struct ComplexNumber{
  float x;
  float y;//*i
};
ComplexNumber operator+(const ComplexNumber &a, const ComplexNumber &b);
ComplexNumber operator-(const ComplexNumber &a, const ComplexNumber &b);
ComplexNumber operator*(const ComplexNumber &a, const ComplexNumber &b);
ComplexNumber operator/(const ComplexNumber &a, const ComplexNumber &b);
std::ostream & operator<<(std::ostream & out,const ComplexNumber &a);
bool operator==(const ComplexNumber &a, const ComplexNumber &b);
bool operator!=(const ComplexNumber &a, const ComplexNumber &b);