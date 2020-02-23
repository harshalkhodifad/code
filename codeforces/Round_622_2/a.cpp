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
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        int cnt = 0;
        // sort(a, a+3, greater<int>());
        for (int i=0;i<3;++i) {
            if (a[i]>0) {
                cnt++;
                a[i]--;
            }
        }

        bool flag1=false,flag2=false,flag3=false;

        for (int i=0;i<3;i++) {
            if (min(a[0],min(a[1],a[2])) == a[0] && a[1]>0 && a[2]>0 && !flag1) {
                cnt++;
                a[1]--;
                a[2]--;
                flag1 = true;
                continue;
            }
            if (min(a[0],min(a[1],a[2])) == a[1] && a[0]>0 && a[2]>0 && !flag2) {
                cnt++;
                a[2]--;
                a[0]--;
                flag2 = true;
                continue;
            }
            if (min(a[0],min(a[1],a[2])) == a[2] && a[1]>0 && a[0]>0 && !flag3) {
                cnt++;
                a[0]--;
                a[1]--;
                flag3 = true;
                continue;
            }
        }
        if (a[0]>0 && a[1]>0 && a[2]>0) {
            cnt++;
            a[0]--;
            a[1]--;
            a[2]--;
        }

        cout << cnt << "\n";

    }
}

