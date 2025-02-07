#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void fill_v(vector<int> &v, int n) {
  for (int j = 0; j < n - 1; ++j) {
    int a;
    cin >> a;
    if (find(v.begin(), v.end(), a) == v.end()) {
      v.push_back(a);
    }
  }
}

void print_v(vector<int> &v) {
    for (int i = 0; i < v.size() - 1; ++i) {
        cout << v[i] << " ";
    }
    cout << v[v.size() - 1] << endl;
}

int main() {
    int t, n;
    cin >> t;
      while (t--) {

      cin >> n;

      vector<int> v;
      for (int i = 0; i < n; ++i) {
        fill_v(v, n);
      }
      print_v(v);
      v.clear();
    }
    return 0;
}