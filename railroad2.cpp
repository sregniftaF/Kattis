/* to be a close loop, the number
 of intersections must have a closing, 
hence it has to be aan even number*/
#include <iostream>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  if ((x * 4 + y * 3) % 2 == 0) {
    cout << "possible" << endl;
  } else {
    cout << "impossible" << endl;
  }
  return 0;
}