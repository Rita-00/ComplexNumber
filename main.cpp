#include <iostream>
#include "lib.h"

using namespace std;

int main() {
  ComplexNumber a{-4,1},b{1,1};
  cout<<(a+b)<<'\n';
  cout<<(a-b)<<'\n';
  cout<<(a*b)<<'\n';
  cout<<(a/b)<<'\n';
  return 0;
}