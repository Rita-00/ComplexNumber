#include <iostream>
#include <math.h>
#include "lib.h"
ComplexNumber operator+(const ComplexNumber &a, const ComplexNumber &b){
  ComplexNumber r=a;
  r.x+=b.x;
  r.y+=b.y;
  return r;
}

ComplexNumber operator-(const ComplexNumber &a, const ComplexNumber &b){
  ComplexNumber r=a;
  r.x-=b.x;
  r.y-=b.y;
  return r;
}
ComplexNumber operator*(const ComplexNumber &a, const ComplexNumber &b){
  ComplexNumber r=a;
  r.x=a.x*b.x-a.y*b.y;
  r.y=a.x*b.y+b.x*a.y;
  return r;
}
ComplexNumber operator/(const ComplexNumber &a, const ComplexNumber &b){
  ComplexNumber r=a;
  r.x=(a.x*b.x+a.y*b.y)/(b.x*b.x+b.y*b.y);
  r.y=(b.x*a.y-a.x*b.y)/(b.x*b.x+b.y*b.y);
  return r;
}

std::ostream & operator<<(std::ostream & out,const ComplexNumber &a){
  out<<a.x;
  if (a.y>0) {
    out<<"+";
    out<<a.y;
  }
  else {
   if (a.y<0) {
     out << a.y;
   }
   else{
     out<<"+";
   }
  }
  out<<"i";
  return out;
}

bool operator==(const ComplexNumber &a, const ComplexNumber &b){
  return((a.x==b.x)&&(a.y==b.y));
}

bool operator!=(const ComplexNumber &a, const ComplexNumber &b){
  return((a.x!=b.x)||(a.y!=b.y));
}