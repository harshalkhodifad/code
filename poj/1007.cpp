#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>

using namespace std;
int n = 0;

int unsortedness(const string& s) {
	int count = 0;
	for (int i=0; i<s.size(); ++i) {
		for (int j=i+1; j<s.size(); ++j) {
			if ((int)s[j] < (int)s[i]) {
				count++;
			}
		}
	}
	return count;
}

bool comp(const pair<string, int>& p1, const pair<string, int>& p2) {
	return p1.second < p2.second;
}

int main() {
	int m;
	cin >> n >> m;
	vector<pair<string,int> > vec;
	for (int i=0;i<m;i++) {
		pair<string, int> buf;
		cin >> buf.first;
		buf.second = unsortedness(buf.first);
		vec.push_back(buf);
		// cout << buf.second;
	}
	sort(vec.begin(), vec.end(), comp);
	for (vector<pair<string, int> >::iterator x = vec.begin();x<vec.end();x++) {
		cout << (*x).first << endl;
	}

	return 0;
}
