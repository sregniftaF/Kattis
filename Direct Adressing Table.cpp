/* AAR
sam's solution, compare the cahr of each string and compare each letter from a-z, then store into array
Brandon's solution, direct addressing table; 
Learnt
- "auto" can be feature used read every char in the str; reading key value pair in  a hash table
- Freq [ i - 'a'] refers to the position in which the alph is at

*/

#include<iostream>
#include<string>
using namespace std;
int freq[26];

int main() {
	string s;
	cin >> s;
	for (auto i : s) {
		freq[i - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		cout << freq[i] << " ";
	}
}
/*
int main()
{
	string X,Y;
	cin >> X;
	for (char alp = 'a'; alp <= 'z'; alp++)
	{
		for (int i = 0; X[i] != '\0'; i++)
		{
			if (X[i] == alp)
			{
				freq[alp-'a']++;
			}
		}
	}

	for (int i = 0; i<32; i++)
	{
		cout << freq[i];
	}
}*/








