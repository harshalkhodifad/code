#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<cmath> // log2
#include<climits>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t-->0) {
        string a,b,c;
        cin >> a >>b >>c;
        bool flag = true;
        for (int i=0;i<a.size();++i) {
            if (!(a[i] == c[i]  || b[i] == c[i] ))
            {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

