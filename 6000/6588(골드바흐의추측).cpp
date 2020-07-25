#include <bits/stdc++.h>
#define MAX_SIZE 1000001

using namespace std;

vector<int> v;
bool prime[MAX_SIZE];

void setPrime()
{
  for (int i = 2; i < MAX_SIZE; i++)
  {
    if (prime[i] == false)
    {
      v.push_back(i);
      for (int j = i * 2; j < MAX_SIZE; j += i)
      {
        prime[j] = true;
      }
    }
  }
}

int search(int target)
{
  int first, last, mid;
  first = 0;
  last = v.size();

  while (first < last)
  {
    mid = (first + last) / 2;
    if (v[mid] < target)
    {
      first = mid + 1;
    }
    else
    {
      last = mid - 1;
    }
  }
  return mid;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  memset(prime, false, sizeof(prime));

  setPrime();

  while (1)
  {
    int n;
    cin >> n;
    if (n == 0)
    {
      break;
    }
    int a, b;
    a = 1;
    b = search(n) + 1;
    if (b == v.size()) // 마지막 size를 저장할수도 있기 때문에
    {
      b--;
    }

    // cout << v.size() << ", " << b << '\n'; // 999998
    // cout << v[b] << '\n';

    int i, j;
    for (i = b; i >= 1; i--)
    {
      for (j = a; j <= b; j++)
      {
        if (v[i] + v[j] == n)
        {
          cout << n << " = " << v[j] << " + " << v[i] << '\n';
          i = 1;
          break;
        }
      }
    }
    if (i != 0)
    {
      cout << "Goldbach's conjecture is wrong.\n";
    }
  }

  return 0;
}