#include <bits/stdc++.h>

using namespace std;

int main()
{
  // ios_base::sync_with_stdio(false);
  // cin.tie(nullptr);
  char str[2501];
  char find[51];
  gets(str);
  gets(find);

  int findLen = strlen(find);
  char *s = str;
  int cnt = 0;

  do
  {
    s = strstr(s, find);
    s += findLen;
    cnt++;
  } while (s - findLen != NULL);

  printf("%d\n", cnt - 1);

  return 0;
}