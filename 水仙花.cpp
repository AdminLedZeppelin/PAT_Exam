#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
  int down, up;
  while (cin >> down >> up)
  {
    vector<int> flower;
    for (int i = down; i <= up; i++)
    {
      vector<int> number;
      int m = i;
      while (m/10!=0)
      {
        number.push_back(m % 10);
        m = m / 10;
      }
      number.push_back(m);
      int sum = 0;
      for (int k = 0; k < number.size(); k++)
      {
        sum = sum + pow(number[k], 3);
      }
      if (sum==i)
      {
        flower.push_back(i);
      }
    }
    if (flower.empty())
    {
      cout << "no" << endl;
    }
    else
    {
            cout<<flower[0];
      for ( int i = 1;  i < flower.size();  i++)
      {
        cout << " "<<flower[i] ;
      }
      cout << endl;
    }
  }
  return 0;
}