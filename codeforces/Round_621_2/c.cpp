#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<cmath> // log2
#include<climits>
#include<algorithm>
#include<string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    long long a[26][26];
    long long b[26];
    int n = s.size();
    long long maxx = 0;
    for (int i=0;i<26;++i) {
        b[i] = 0;
        for (int j=0;j<26;++j) {
            a[i][j] = 0;
        }
    }
    int aa = (int)('a');

    for (int i=n-1;i>=0;--i) {
        int x = (int)s[i]-aa;
        for (int j=0;j<26;++j) {
            a[x][j] += b[j];
        }
        b[x]++;
    }


    for (int i=0;i<26;++i) {
        // cout << b[i] << " \n"; 
        maxx = max(maxx, b[i]);
        for (int j=0;j<26;++j) {
            // cout << a[i][j] << " ";
            maxx = max(maxx, a[i][j]);
        }
        // cout << "\n";
    }

    cout << maxx << "\n";
}

