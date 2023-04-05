#include <iostream>
using namespace std;
int main()
{
  int size = 8;

  for ( int i = 1; i <= size; i++)
  {
    int temp = i;
    int space = size - i;
    while(space--)
    {
      cout<<" ";
    }
    while(temp--)
    {
      cout<<"*";
    }
    cout<<endl;
  }

  return 0;
}
