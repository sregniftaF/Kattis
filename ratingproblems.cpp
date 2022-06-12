#include <iostream>
using namespace std;
int main() {
  int n, r, k;
  double total = 0, maxpt = 0, minpt = 0;
  cin >> n >> k;
  while (cin >> r) {
    total = total + r;
  }
  cout << (total + ((n - k) * (-3.0))) / n << endl
       << (total + ((n - k) * 3.0)) / n;
}