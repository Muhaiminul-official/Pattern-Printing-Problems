#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n = 9;
  int init = 1;
  int p[100][100];
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << "  ";
    }
    for (int j = 1; j <= i; j++)
    {

      if (j == 1)
      {
        if (n >= 6)
        {
          if (j == i && i != 1)
          {
            p[i][j] = 1;
            cout << " " << p[i][j];
          }
          else
          {
            p[i][j] = 1;
            cout << p[i][j] << "  ";
          }
        }
        else
        {
          p[i][j] = 1;
          cout << p[i][j] << " ";
        }
      }
      else
      {
        if (n >= 6)
        {
          p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
          cout << p[i][j] << "  ";
        }
        else
        {
          p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
          cout << p[i][j] << " ";
        }
      }
    }
    cout << endl;
  }

  return 0;
}

/*
  #include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows for Pascal's Triangle
    int currentRow[10]; // Array to store the current row (adjust size as needed)

    // Generate Pascal's Triangle
    for (int i = 0; i < n; i++) {
        int previous = 1; // The first value in each row is always 1
        cout << string(n - i - 1, ' '); // Print spaces for formatting

        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                currentRow[j] = 1; // First and last values are always 1
            } else {
                int temp = currentRow[j]; // Temporarily store the current value
                currentRow[j] = previous + currentRow[j]; // Calculate the new value
                previous = temp; // Update previous for the next calculation
            }
            cout << currentRow[j] << " "; // Print the value
        }
        cout << endl;
    }

    return 0;
}

*/