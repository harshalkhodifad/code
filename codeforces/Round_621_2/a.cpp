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
        int n,d;
        cin >> n >> d;
        int a[n];
        for (int i=0;i<n;++i)   cin>>a[i];
        int sum = a[0];
        for (int i=1;i<n;++i) {
            if (d<=0)   break;
            if (d>=i*a[i]) {
                d -= i*a[i];
                sum += a[i];
            } else {
                sum += d/i;
                d= 0;
            }
        }
        cout << sum << "\n";
    }
}

