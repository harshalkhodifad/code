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
    int t;
    cin >> t;
    while(t-->0) {
        int n,x;
        cin >> n >> x;
        int maxx = 0,temp;
        int ans = 0;
        for (int i=0;i<n;++i) {
            cin >> temp;
            maxx = max(maxx, temp);
            if (x == temp) {
                ans = 1;
            }
        }
        if (ans) {
            cout << ans << "\n";
        } else {
            ans = (int)ceil((double)x/maxx);
            if (maxx>x) {
                ans = 2;
            }
            cout << ans << "\n";
        }
    }
}

