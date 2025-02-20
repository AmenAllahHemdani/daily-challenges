#include <iostream>
#include <map>
using namespace std;

#define mii map<int, int>
#define pii pair<int, int>
#define it mii::iterator

void fill_m(mii &m, int n) {
  for (int j = 0; j < n - 1; ++j) {
    int a;
    cin >> a;
    if (m.find(a) == m.end()) {
      m.insert(pii(a, j));
    } else {
      m.at(a) += j;
    }
  }
}

mii print_mline(mii &m) {
  mii mline;
  for (it i = m.begin(); i != m.end(); ++i) {
    mline.insert(pii(i->second, i->first));
  }
  return mline;
}

void print_m(mii &m) {
  for (it i = m.begin(); i != m.end(); ++i) {
      cout << i->second << " ";
  }
  cout << endl;
}

int main() {
  int t, n;
  cin >> t;
    while (t--) {
      cin >> n;
      mii m;
      for (int i = 0; i < n; ++i) {
        fill_m(m, n);
      }
      mii line = print_mline(m);
      print_m(line);
      m.clear();
      line.clear();
  }
  return 0;
}