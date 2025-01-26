#include<iostream>
#include<string>
using namespace std;
int main()
{
  int n = 4;
  for (int i = 1; i <= n;i++){
    for (int j = 1; j <= i;j++){
      if(i%2==0){
        if (j % 2 == 1)
        {
          cout << "0";
        }
        else
        {
          cout << "1";
        }
      }else{
        if (j % 2 == 1)
        {
          cout << "1";
        }
        else
        {
          cout << "0";
        }
      }
    }
    cout << endl;
  }
    return 0;
}