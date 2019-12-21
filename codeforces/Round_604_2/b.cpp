#include <iostream>
#include <sstream>
#include <vector>
#include <unordered_set>

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
        int n;
        cin >> n;
        vector<int> a;
        int temp;
        int index;
        for (int i=0;i<n;++i) {
            cin >> temp;
            a.push_back(temp);
            if (temp==1) {
                index = i;
            }
        }

        int first = index;
        int last = index;
        unordered_set<int> x;
        unordered_set<int> y;

        index = 2;
        x.insert(1);
        out << "1";
        while(index<a.size()) {
            // add
            if (!x.count(index)) y.insert(index);

            // expand
            int elem;
            if (first==0) {
                elem = a[++last];
            } else if (last==a.size()-1) {
                elem = a[--first];
            } else if (a[first-1] > a[last+1]) {
                elem = a[++last];
            } else {
                elem = a[--first];
            }

            x.insert(elem);
            y.erase(elem);

            // cout << index << " == == " << first << " " << last << " -- "<< y << " this was set \n";

            // empty
            if (y.empty()) {
                out << "1";
            } else {
                out << "0";
            }

            ++index;

        }
        if (a.size()>1) {
            out << "1";
        }
        out<<"\n";
        

    }

    cout << out.str();
    return 0;
}