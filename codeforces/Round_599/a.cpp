#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
    int k;
    scanf("%d", &k);
    while(k-->0) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i=0;i<n;i++)   scanf("%d", &a[i]);
        sort(a, a+n);
        int ma = 0;
        for (int i=0;i<n;i++) {
            ma = max(ma, min(a[i], (n-i)));
        }
        printf("%d\n", ma);
    }
    return 0;
}