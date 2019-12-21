#include <iostream>
using namespace std;

// template <typename T>
// void swap(T& x, T& y) {
//     T z =  x;
//     x = y;
//     y = z;
// }

int cnt = 0;

void permute(string& s, int start)
{
    // cout << s << endl;
    // cout << "Called " << s << s.size()-2 << start << endl;
    if (start + 2 == s.size()) {
        cout << s << endl;
        cnt++;
        swap(s[start], s[start+1]);
        cout << s << endl;
        cnt++;
        swap(s[start], s[start+1]);
        return;
    } else if (start + 1 == s.size()) {
				cout << s << endl;
				++cnt;
		}
    
    if (start +2 < s.size()) {
        permute(s, start+1);
    }

    for (int i=start+1; i<s.size(); ++i)
    {
        // cout << s << endl;
        swap(s[start], s[i]);
        // cout << "Now" << s << i << endl;
        permute(s, start+1);
        swap(s[start], s[i]);
    }
}

int main() {
	string s;
	cout << "Enter String For Permutation: ";
	cin >> s;
	cout << "----" << endl;
	permute(s, 0);
	cout << cnt << endl;
  return 0;
}