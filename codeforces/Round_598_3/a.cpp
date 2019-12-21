#include <cstdio>
using namespace std;

int main(int argc, char *argv[]) {
    int q;
    scanf("%d", &q);
    while(q-->0) {
        int a,b,n,s;
        scanf("%d %d %d %d", &a, &b, &n, &s);
        if (b >= s%n && (s/n <= (a + (b - s%n)/n))) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }
    return 0;
}