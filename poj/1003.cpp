#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

double max_over = 5.20;

int main() {
	vector<float> v;
	float cnt = 2;
	float sum = 0;
	while(sum<max_over) {
		v.push_back(sum+=(1/cnt++));
		// cout << sum << endl;
	}
	float temp;
	cin >> temp;
	while(temp) {
		vector<float>::iterator itr = lower_bound(v.begin(), v.end(), temp);
		cout << distance(v.begin(), itr) + 1 << " card(s)"<< endl;
		cin >> temp;
	}
	return 0;
}
