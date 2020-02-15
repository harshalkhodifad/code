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
        int n; int m;
        cin >> n >> m;
        int a[n][3];
        for (int i=0;i<n;++i) {
            cin >> a[i][0] >> a[i][1] >> a[i][2];
        }

        int min_possible = m;
        int max_possible = m;
        int time = 0;
        bool possible = true;

        for (int i=0;i<n;++i) {
            int diff = a[i][0] - time;
            int high = a[i][2];
            int low = a[i][1];
            int minn = min_possible - diff;
            int maxx = max_possible + diff;
            // cout << diff << " " << minn << " " << maxx << " " << m << endl;

            if ((minn>high) || (maxx<low)) {
                possible = false;
                break;
            }

            min_possible = max(minn, low);
            max_possible = min(maxx, high);
            time = a[i][0];
        }

        if (possible) {
            cout << "YES\n";
        } else cout << "NO\n";
    }
}

