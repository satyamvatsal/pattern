#include <iostream>
using namespace std;
int main()
{
  int size = 8;

  for (int i = 0; i < size; i++)
  {
    int space = i;
    int star = size-i;
    while (space--)
    {
      cout<<" ";
    }
    while (star--)
    {
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}
