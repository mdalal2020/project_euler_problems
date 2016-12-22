#include <iostream>
using namespace std;

int main()
{
  for(int c = 3; c < 1000; c++)
  {
    for (int b = 2; b < c; b++)
    {
      for(int a =2; a<c; a++)
      {
        if(a*a + b*b == c*c && a + b + c == 1000)
        {
          cout << a*b*c << endl;
          return 0;
        }
      }
    }
  }
  return 0;
}
