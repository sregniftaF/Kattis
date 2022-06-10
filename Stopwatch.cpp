  /* Note to self
+ when printing an output rmb to take it out of forloop */
#include <iostream>
using namespace std;
int main() {
  int n, tcnt[1000], total = 0;  // no. of times they run
  cin >> n;
  for (int i = 0; i < n; i++) {
    if (n % 2 == 1) {
      cout << "still running";
      return 0;
    } else {
      cin >> tcnt[i];
      if (i % 2 == 1) {
        total = total + (tcnt[i] - tcnt[i - 1]);
      }
    }
  }
  cout << total << endl;
}