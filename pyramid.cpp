#include <iostream>
using namespace std;
int main()
{
  int size = 11;
  int star;
  for (int i = 1; i <= size/2; i++)
  {
      star = 2*i-1;
      int space = (size-star)/2;
      while(space-- && space>0)
      {
        cout<<" ";
      }
      space = (size-star)/2;
      while(star--)
      {
        cout<<"*";
      }
      while (space-- && space>0)
      {
        cout<<" ";
      }
      cout<<endl;
  }

  return 0;
}
