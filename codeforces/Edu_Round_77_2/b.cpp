#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a,b;
        cin >> a >> b;
        int x = min(a,b);
        int y = a+b - x;
        if (y-x > x) {
            cout << "NO" <<endl;
            continue;
        } else {
            int d = y-x;
            x -= d;
            y -= 2*d;
            if (x==y && (x==0 || (y%3==0 && y>0))) {
                cout << "YES" << endl;
                continue;
            }
        }
        cout << "NO" <<endl;
    }

    return 0;
}