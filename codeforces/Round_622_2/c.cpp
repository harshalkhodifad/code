#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<cmath> // log2
#include<climits>
#include<algorithm>
#include<string>

using namespace std;

typedef long long int ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    long long int a[n], b[n], c[n];
    for (int i=0;i<n;++i) {
      cin >> a[i];
      b[i] = 0;
      c[i] = 0;
    }
    long long int sum,last;
    for (int i=0;i<n;++i) {
        sum = 0;
        last = a[i];
        for (int j=i-1;j>=0;--j) {
            last = min(last, a[j]);
            sum += last;
        }
        b[i] = sum;
        // cout << b[i] << " ";
    }

    // cout << "\nc:\n";
    for (int i=0;i<n;++i) {
        sum = 0;
        last = a[i];
        for (int j=i+1;j<n;++j) {
            last = min(last, a[j]);
            sum += last;
        }
        c[i] = sum;
        // cout << c[i] << " ";
    }

    long long int mx = 0;
    int index = 0;

    for (int i=0;i<n;++i) {
        if (a[i]+b[i]+c[i]>mx) {
            index = i;
            mx = a[i] + b[i] + c[i];
        }
    }
    // cout << mx << "\n";
    // cout << index << "\n";

    long long int ans[n];
    ans[index] = a[index];
    last = a[index];
    for (int i=index+1;i<n;++i) {
        last = min(last, a[i]);
        ans[i] = last;
    }
    last = a[index];
    for (int i=index-1;i>=0;--i) {
        last = min(last, a[i]);
        ans[i] = last;
    }

    for (int i=0;i<n;++i) {
        cout << ans[i] << " ";
    }
}

