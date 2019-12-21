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

void changeIt(unordered_set<string>& st, string& s) {
    char x = '0';
    while (st.count(s)) {
        s[0] = x++;
    }
    st.insert(s);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        string temp;
        unordered_set<string> s;
        vector<string> v;
        int count= 0;
        for (int i=0;i<n;++i) {
            cin>>temp;
            s.insert(temp);
            v.push_back(temp);
            
        }
        cout << v.size() - s.size() <<endl;
        unordered_set<string> ss;
        vector<string> vv;
        for (int i=0;i<n;++i) {
            string& temp = v[i];
            if (ss.count(temp)) {
                ++count;
                changeIt(s,temp);
            }
            ss.insert(temp);
            vv.push_back(temp);
        }
        for (int i=0;i<n;++i) {
            cout << v[i] <<endl;
        }
    }

    cout << out.str();
    return 0;
}