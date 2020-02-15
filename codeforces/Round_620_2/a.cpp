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
        int x,y,a,b;
        cin >> x >> y >> a >> b;
        if ((y-x) %(a+b)==0) {
            cout << (y-x)/(a+b) << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
}

