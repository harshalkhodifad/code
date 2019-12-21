#include <iostream>
#include <sstream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

stringstream out;

template<typename T>
ostream& operator<<(ostream& os, unordered_set<T> s) {
    for (auto x: s) {
        os << x << " ";
    }
    return os;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        long long a,b,c;
        cin >> a>>b >>c;
        vector<long long> v{a,b,c};
        sort(v.begin(), v.end());
        if (v[0]+v[1] >= v[2]) {
            cout << (v[0] + v[1] + v[2])/2 <<endl;
        } else {
            cout << min(v[0] + v[1], v[2]) << endl;
        }
        

    }

    cout << out.str();
    return 0;
}