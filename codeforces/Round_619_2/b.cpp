#include<iostream>
#include<vector>
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
        int n;
        cin >> n;
        int a[n];
        for (int i=0;i<n;++i)   cin >> a[i];
        vector<int> v{};
        bool flag = false;
        for (int i=0;i<n;++i) {
            flag = false;
            if (i==0) {
                if (a[i+1]==-1 && a[i]!=-1) {
                    v.push_back(a[i]);
                }
            } else if((i==n-1 && a[i-1]==-1) && a[i]!=-1) {
                v.push_back(a[i]);
            } else {
                if ((a[i-1]==-1 || a[i+1]==-1) && a[i]!=-1) {
                    v.push_back(a[i]);
                }
            }
        }
        int ans,k;
        if (v.size()==0) {
            ans = 0;
            for (int i=0;i<n;++i) {
                if (a[i]==-1)   a[i]=ans;
            }
            k = abs(a[1]-a[0]);
            for (int i=0;i<n-1;++i) {
                k = max(abs(a[i+1]-a[i]), k);
            }
        } else {
            int high = v[0];
            int low = v[0];
            for (int x:v) {
                high = max(high, x);
                low = min(low, x);
            }
            ans = (high+low)/2;
            for (int i=0;i<n;++i) {
                if (a[i]==-1)   a[i]=ans;
            }
            k = abs(a[1]-a[0]);
            for (int i=0;i<n-1;++i) {
                k = max(abs(a[i+1]-a[i]), k);
            }
        }
        cout << k << " " << ans << "\n";


    }
}

