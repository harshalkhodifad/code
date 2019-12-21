#include <cstdio>
#include <vector>
using namespace std;


int main(int argc, char *argv[]) {
    int n,q;
    scanf("%d %d", &n, &q);
    vector<int> a[n];
    for (int i=0;i<n;i++) {
        int l;
        scanf("%d", &l);
        for (int j=0;j<l;j++) {
            int x;
            scanf("%d ", &x);
            a[i].push_back(x);
        }
    }

    while(q-->0) {
        int i,j;
        scanf("%d %d", &i, &j);
        printf("%d", a[i][j]);
    }
    return 0;
}

