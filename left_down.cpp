#include <iostream>
using namespace std;
int main()
{
  int size = 8;

  for (int i = size; i > 0; i--)
  {
    int temp = i;
    while (temp--)
    {
      cout<<"*";
    }
    cout<<endl;
  }

  return 0;
}
