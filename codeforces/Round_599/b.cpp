#include <stdio.h>
#include <algorithm>
using namespace std;

char temp;
#define skip scanf("%c", &temp);

int main() {
    int k;
    scanf("%d", &k);
    while(k-->0) {
        int n;
        scanf("%d", &n);skip;
        char a[n], b[n];
        for (int i=0;i<n;i++) {
            scanf("%c", &a[i]);
        }
        skip;
        for (int i=0;i<n;i++)   scanf("%c", &b[i]);
        // skip;
        // printf("%s\n", a);
        // printf("%s\n", b);
        int x= -1;
        int y = -1;
        int count = 0;
        bool flag = false;
        for (int i=0;i<n;i++)
        {
            if (a[i]!=b[i]) {
                count++;
                if (x==-1) x = i;
                else y=i;
                if (count>2) {
                    break;
                }
            }
        }
        if (!flag) {
            if (count==0) {
                flag = true;
            } else if (count==2) {
                if (a[x]==a[y] && b[x]==b[y]) {
                    flag = true;
                }
            }
        }
        if (flag) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}