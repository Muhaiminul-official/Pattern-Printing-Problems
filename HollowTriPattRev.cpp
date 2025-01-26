#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n = 5;
  for (int i = n; i >0; i--)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << " ";
    }
    cout << "* ";
    for (int j = 1; j < i - 1; j++)
    {
      if (i != n)
      {
        cout << "  ";
      }
      else
      {
        cout << "* ";
      }
    }
    if (i != 1)
    {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}