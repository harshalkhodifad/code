#include<iostream>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t-->0) {
        long long n,g,b,req_g;
        cin >> n >> g >> b;
        req_g = (n+1)/2;
        long long days = 0;
        if (req_g%g == 0) {
            days = (req_g/g - 1) * (g+b) + g;
        } else {
            days = (req_g/g) * (b+g) + req_g%g;
        }
        cout << max(days,n) << "\n";
    }
}