#include <iostream>
using namespace std;
int main()
{

  int a = 1;
  int b = 2;

  if (a-- > 0 && ++b > 2)
  {
    cout << "Stage 1 - Inside if" << endl;
  }
  else
  {
    cout << "Stage 2 - Inside else" << endl;
  }
  cout << a << " " << b << endl;
}

//  output is stage 1 - inside if
//  a = 0 b= 3