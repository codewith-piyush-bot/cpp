#include <iostream>
#include <math.h>
using namespace std;

int update(int a)
{
  a = a - 5;
  return a;
}

int main()
{
  int a = 15;
  update(a);
  cout << a << endl;
}