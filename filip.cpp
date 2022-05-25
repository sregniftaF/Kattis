/*
AAR
Things can be shortened, aka code designs , find ways to shortern the code
- string can be used as chars as string[]
- stoi can be used to convert string to int through <string>
- online search for library for fnc.
- <algorithm> eg; max (a,b)
- char can be converted to array by having an integer = char-0
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string N, M;
	cin >> N >> M;
	swap(N[0], N[2]);
	swap(M[0], M[2]);
	int a = stoi(N);
	int b = stoi(M);
	cout << (max(a, b));

}

/* ++++++++++++MISTAKE+++++++++ 
char N[3], M[3];

for (int i = 0; i < 3; i++)
{
	cin >> N[i];
}

for (int i = 0; i < 3; i++)
{
	cin >> M[i];
}

int n,m,n1,n2,n3,m1,m2,m3;

for (int i = 0; i < 3; i++)
{
	if (i == 2)
	{
		n3 = (N[i] - 0);
		m3 = (M[i] - 0);
	}
	if (i == 1)
	{
		n2 = (N[i] - 0) * 10;
		m2 = (M[i] - 0) * 10;
	}
	if (i == 0)
	{
		n1 = (N[i] - 0) * 100;
		m1 = (M[i] - 0) * 100;
	}
}
n = n1 + n2 + n3;
m = m1 + m2 + m3;
cout << n << "    " << m << endl;
}*/