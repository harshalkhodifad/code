#include <iostream>
#include <sstream>

using std::cout; using std::endl; 
using std::cin; using std::string;

std::stringstream out;

bool is_possible(string& s);

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s, ss;
		cin >> s;
		if (!is_possible(s)) {
			out << -1 << "\n";
			continue;
		}
		for (int i=0;i<s.length();++i)
		{
			if (s[i]=='?') {
				if (i>0 && i<s.length()-1) {
					if (s[i-1]=='a' || s[i+1]=='a') {
						if (s[i-1]=='b' || s[i+1]=='b') {
							s[i] = 'c';
						} else s[i] = 'b';
					} else s[i] = 'a';
				}
				else if (i==0) {
					if (s[i+1]=='a') {
						if (s[i+1]=='b') {
							s[i] = 'c';
						} else s[i] = 'b';
					} else s[i] = 'a';
				} else {
					if (s[i-1]=='a') {
						if (s[i-1]=='b') {
							s[i] = 'c';
						} else s[i] = 'b';
					} else s[i] = 'a';
				}
			} else {
				ss.append(1, s[i]);
			}
		}

		out << s << "\n";
	}

	cout << out.str();
}

bool is_possible(string& s) {
	for (int i=0;i<s.length()-1;++i) {
		if (s[i]==s[i+1] && s[i]!='?') return false;
	}
	return true;
}