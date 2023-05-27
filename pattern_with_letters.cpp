#include <iostream>
typedef long long ll;
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  cin.sync_with_stdio(0);
  cin.tie(0);

  char code = 'A';
  printf("ABCDEFGFEDCBA\n");
  for(int n = 5;n>=0;n--){
  for(int i =0;i<=n;i++)
  {
    printf("%c", code+i);
  }
  int x = (5-n)*2+1;
  while(x--)

  {
    printf(" ");
  }
  x=x+2;
  
  for(int i = n;i >= 0;i--)
  {
    printf("%c", code+i);
  }
  printf("\n");

}
  return 0;
}
