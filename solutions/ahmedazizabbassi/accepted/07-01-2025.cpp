#include <iostream>
#include <string>

using namespace std;

int getMask(int a)
{
  string mask = "";
  const string na = to_string(a);
  const int len = na.length();
  for (int i = 0; i < len; i++)
  {
    if (na[i] == '4' || na[i] == '7') mask += na[i];
  }
  try
  {
    return stoi(mask);

  } catch (exception &e)
  {
    return 0;
  }
}

int mask(int a, int b)
{
  if (b > a) return b;
  while (a++)
  {
    const int m = getMask(a);
    if (b == m) return a;
  }
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << mask(a, b);
}