#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;


    while(t--) {
        int a,b;
        cin >> a >> b;

        if (a>=b) {
            cout << b << endl;
            continue;
        }

        int total = 0;
        while(b>0) {
            total+=(b/a) * (b/a);
            b -= (b/a);
            --a;
        }
        cout << total << endl;
    }
     
    return 0;
}