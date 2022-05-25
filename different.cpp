/* Note to self
the problem is to have the difference in two no. and absolute it
Learning pt
- make sure code runs in source file
- while loop can accept inputs
- can be input into array if want to output orderly
*/
#include <iostream>
using namespace std;

int main()
{
	long long n1, n2, diff;
	while (cin >> n1 >> n2)
	{
		diff = abs(n1 - n2);
		cout << diff << endl;
	}
}