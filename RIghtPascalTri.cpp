#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n = 4;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      if (i % 2 == 0 && j % 2 == 1 || i % 2 == 1 && j % 2 == 0)
      {
        cout << "  ";
      }
      else
      {
        cout << "* ";
      }
    }
    cout << endl;
  }
  for (int i = n - 1; i > 0;i--)
  {
    for (int j = 1; j <= i; j++)
    {
      if (i % 2 == 0 && j % 2 == 1 || i % 2 == 1 && j % 2 == 0)
      {
        cout << "  ";
      }
      else
      {
        cout << "* ";
      }
    }
    cout << endl;
  }
  return 0;
}