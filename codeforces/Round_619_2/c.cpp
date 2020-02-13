/*
1 0
1 1
2 0
2 1
2 2
3 0
3 1
3 2
3 3
4 0
4 1
4 2
4 3
4 4
5 0
5 1
5 2
5 3
5 4
5 5
6 0
6 1
6 2
6 3
6 4
6 5
6 6
7 0
7 1
7 2
7 3
7 4
7 5
7 6
7 7
8 0
8 1
8 2
8 3
8 4
8 5
8 6
8 7
8 8
9 0
9 1
9 2
9 3
9 4
9 5
9 6
9 7
9 8
9 9
10 0
10 1
10 2
10 3
10 4
10 5
10 6
10 7
10 8
10 9
10 10
11 0
11 1
11 2
11 3
11 4
11 5
11 6
11 7
11 8
11 9
11 10
11 11
12 0
12 1
12 2
12 3
12 4
12 5
12 6
12 7
12 8
12 9
12 10
12 11
12 12

*/


#include<iostream>
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
        long long n,m;
        long long ans;
        cin >> n >> m;
        ans = (n*(n+1))/2;
        long long neg = (long long)0;
        long long x,rem;
        if (m+1 >= (n-m)) {
            neg = (n-m);
        } else {
            x = (long long)round((n-m) * 1.0/ (m+1));
            rem = (n - (x+1)*m);
            // cout << "n: "<< n << " m:" <<m << " x:" << x <<" rem:" << rem << "\n";
            x = (x*(x+1)/2)*(m);
            rem = (rem*(rem+1)/2);
            neg = x+rem;
        }
        cout << ans-neg << "\n";
    }
}

