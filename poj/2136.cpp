#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	int a[26];
	int max_height = 0;
	memset(a, 0, sizeof(int)*26);
	string s[4];
	for (int i=0;i<4;i++)	{
		getline(cin, s[i]);
		for (int j=0;j<s[i].size();j++) {
			if (!(s[i][j]>='A' && s[i][j]<='Z'))	continue;
			++a[s[i][j]-'A'];
			max_height = max(max_height, a[s[i][j]-'A']);
		}
	}
	for (int i=max_height;i>0;i--)
	{
		for (int j=0;j<26;j++) {
			if (a[j]>=i) {
				cout << "*";
			} else {
				cout << " ";
			}
			cout << " ";
		}
		cout << "\n";
	}

	for (char x='A';x<='Z';x++)
		cout << x << " ";
	return 0;
}
